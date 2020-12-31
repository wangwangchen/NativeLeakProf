#include <iomanip>
#include <sstream>
#include <Log.h>
#include <vector>
#include "unwind_.h"

_Unwind_Reason_Code unwindCallback(struct _Unwind_Context *context, void *arg) {
    auto *state = static_cast<Backtrace *>(arg);
    uintptr_t pc = _Unwind_GetIP(context);
    if (pc) {
        if (!state->hasRemainSpace()) {
            return _URC_END_OF_STACK;
        } else if (!state->skip()) {
            state->push(pc);
        }
    }
    return _URC_NO_REASON;
}


Backtrace *captureBacktrace(size_t maxCount) {
    auto *state = new Backtrace(maxCount);
    _Unwind_Backtrace(unwindCallback, state);
    return state;
}


void backtraceToLogcat() {
    const size_t max = 300; // 调用的层数
    Backtrace *stack = captureBacktrace(max);
    stack->log();
    delete stack;
}

template <typename ...Args>
static std::string format_string(const char* format, Args... args) {
    constexpr size_t oldlen = BUFSIZ;
    char buffer[oldlen];  // 默认栈上的缓冲区

    size_t newlen = snprintf(&buffer[0], oldlen, format, args...);
    newlen++;  // 算上终止符'\0'

    if (newlen > oldlen) {  // 默认缓冲区不够大，从堆上分配
        std::vector<char> newbuffer(newlen);
        snprintf(newbuffer.data(), newlen, format, args...);
        return std::string(newbuffer.data());
    }

    return buffer;
}

void Backtrace::dladdr_() {
    list<StackElement *>::iterator iter;
    for (iter = mStackElementList->begin(); iter != mStackElementList->end(); iter++) {
        auto stackElement = *iter;
        stackElement->dladdr_();
    }
}

void Backtrace::log() {
    int i = 0;
    list<StackElement *>::iterator iter;

    for (iter = mStackElementList->begin(); iter != mStackElementList->end(); iter++) {
        auto stackElement = *iter;
        stackElement->dladdr_();
        uintptr_t pc = stackElement->getPc();
        Dl_info *dlInfo = stackElement->getDLInfo();
        int32_t dladdr = stackElement->getDladdr();
        void *dli_fbase = dlInfo->dli_fbase;
        void *dli_saddr = dlInfo->dli_saddr;
        if (dladdr == 0 && (uintptr_t) dli_fbase > (uintptr_t) pc) {
            _LOGI_("%s", format_string("    #%02zu pc %0" XCC_UTIL_FMT_ADDR"  <unknown>\n", i, pc).c_str());
        } else {
            const char *dli_fname = stackElement->getDLInfo()->dli_fname;
            if (nullptr == dli_fname || '\0' == dli_fname[0]) {
                _LOGI_("%s", format_string("    #%02zu pc %0" XCC_UTIL_FMT_ADDR"  <anonymous:%" XCC_UTIL_FMT_ADDR">\n",
                        i, pc - (uintptr_t) dli_fbase, (uintptr_t) dli_fbase).c_str());
            } else {
                const char *dli_sname = stackElement->getDLInfo()->dli_sname;
                if (nullptr == dli_sname || '\0' == dli_sname[0]) {
                    _LOGI_("%s", format_string("    #%02zu pc %0" XCC_UTIL_FMT_ADDR"  %s\n", i,
                            pc - (uintptr_t) dli_fbase, dli_fname).c_str());
                } else {
                    if(0 == (uintptr_t) dli_saddr || (uintptr_t)dli_saddr > pc) {
                        _LOGI_("%s", format_string("    #%02zu pc %0" XCC_UTIL_FMT_ADDR"  %s (%s)\n", i, pc - (uintptr_t)dli_fbase, dli_fname,
                                dli_sname).c_str());
                    } else {
                        _LOGI_("%s", format_string("    #%02zu pc %0" XCC_UTIL_FMT_ADDR"  %s (%s+%" PRIuPTR")\n", i, pc - (uintptr_t)dli_fbase, dli_fname,
                                dli_sname, pc - (uintptr_t)dli_saddr).c_str());
                    }
                }
            }
        }

        i++;
    }
}
