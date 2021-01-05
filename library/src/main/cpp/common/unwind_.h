//
// Created by chenwangwang on 2020/12/24.
//

#ifndef NATIVELEAKPROF_UNWIND__H
#define NATIVELEAKPROF_UNWIND__H

#include <inttypes.h>

#if defined(__LP64__)
#define XCC_UTIL_FMT_ADDR "16" PRIxPTR
#else
#define XCC_UTIL_FMT_ADDR "8" PRIxPTR
#endif

#define DEFAULT_MAX_COUNT 30

#include <list>
#include <dlfcn.h>
#include <unwind.h>


using namespace std;

extern _Unwind_Reason_Code unwindCallback(struct _Unwind_Context *context, void *arg);

#define backtrace(maxSize, skipCount) \
({                                                                                            \
    shared_ptr<Backtrace> localTrace = make_shared<Backtrace>(maxSize, skipCount);                 \
    _Unwind_Backtrace(unwindCallback, localTrace.get());                                           \
    localTrace;                                                                                    \
})                                                                                            \


class StackElement {
private:
    shared_ptr<Dl_info> mDLInfo = make_shared<Dl_info>();
    uintptr_t pc;
    uint32_t mDladdr;

public:
    StackElement(uintptr_t pc) : pc(pc) {}

    uintptr_t getPc() const {
        return pc;
    }

    shared_ptr<Dl_info> getDLInfo() const {
        return mDLInfo;
    }

    uintptr_t getRelativePc() {
        return pc - (uintptr_t) mDLInfo->dli_fbase;
    }

    void dladdr_() {
        dladdr((void *) pc, mDLInfo.get());
    }

    uint32_t getDladdr() const {
        return mDladdr;
    }


};

class Backtrace {
private:
    shared_ptr<list<shared_ptr<StackElement>>> mStackElementList = make_shared<list<shared_ptr<StackElement>>>();
    size_t mMaxSize;
    size_t mSkipCount;
    bool isDLAddr = false;

public:
    explicit Backtrace(size_t maxSize) : mMaxSize(maxSize) {
        mSkipCount = 0;
    }

    explicit Backtrace(size_t maxSize, size_t skipCount) : mMaxSize(maxSize), mSkipCount(skipCount) {
    }

    void log();

    void dladdr_();

    void loopElement(const std::function<void(shared_ptr<StackElement> element)>& lambda);

    bool hasRemainSpace() const {
        return mStackElementList->size() < mMaxSize;
    }

    bool skip() {
        if (mSkipCount > 0) {
            mSkipCount--;
            return true;
        }
        return false;
    }

    void push(uintptr_t pc) const {
        mStackElementList->push_back(make_shared<StackElement>(StackElement(pc)));
    }

};

void backtraceToLogcat();

#endif //NATIVELEAKPROF_UNWIND__H
