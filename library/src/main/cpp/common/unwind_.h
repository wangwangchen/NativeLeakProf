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

extern _Unwind_Reason_Code unwindCallback(struct _Unwind_Context *context, void *arg);

#define backtrace(trace) \
_Unwind_Backtrace(unwindCallback, trace)

using namespace std;

class StackElement {
private:
    Dl_info *mDLInfo;
    uintptr_t pc;
    uint32_t mDladdr;

public:
    StackElement(uintptr_t pc) :pc(pc) {
        mDLInfo = new Dl_info();
    }

    virtual ~StackElement() {
        delete mDLInfo;
    }

    uintptr_t getPc() const {
        return pc;
    }

    Dl_info *getDLInfo() const {
        return mDLInfo;
    }

    void dladdr_() {
        dladdr((void *) pc, mDLInfo);
    }

    uint32_t getDladdr() const {
        return mDladdr;
    }


};

class Backtrace {
private:
    list<StackElement *> *mStackElementList;
    size_t mMaxSize;
    size_t mSkipCount;

public:
    explicit Backtrace(size_t maxSize) : mMaxSize(maxSize) {
        mStackElementList = new list<StackElement *>();
        mSkipCount = 0;
    }

    explicit Backtrace(size_t maxSize, size_t skipCount) : mMaxSize(maxSize), mSkipCount(skipCount) {
        mStackElementList = new list<StackElement *>();
    }

    virtual ~Backtrace() {
        for (auto &it : *mStackElementList) {
            delete it;
        }
        delete mStackElementList;
    }

    void log();

    void dladdr_();

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
        mStackElementList->push_back(new StackElement(pc));
    }

};

void backtraceToLogcat();

#endif //NATIVELEAKPROF_UNWIND__H
