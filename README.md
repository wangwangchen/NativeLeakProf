# NativeLeakProf
Android  Native代码（C/C++）内存泄露分析


# 主要思路
- 使用PTL方式Hook内存申请，参考：[XHook](https://github.com/iqiyi/xHook)
- 借鉴XCrash获取线程堆栈数据，参考：[XCrash](https://github.com/iqiyi/xCrash)
- 释放内存时，需要移除对应的申请堆栈
- 最后导出的内存申请堆栈做成火焰图，参考：[如何读懂火焰图？](http://www.ruanyifeng.com/blog/2017/09/flame-graph.html)以及[FlameGraph](https://github.com/brendangregg/FlameGraph)

