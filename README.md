# NativeLeakProf
Android  Native代码（C/C++）内存泄露分析


# 主要思路
- 使用PTL方式Hook内存申请，参考：[XHook](https://github.com/iqiyi/xHook)                
- 释放内存时，需要移除对应的申请堆栈                                                
- 借鉴XCrash获取线程堆栈数据，参考：[XCrash](https://github.com/iqiyi/xCrash)      
- 最后导出的内存申请堆栈做成火焰图，参考：[如何读懂火焰图？](http://www.ruanyifeng.com/blog/2017/09/flame-graph.html)以及[FlameGraph](https://github.com/brendangregg/FlameGraph)                                  


# 已完成
1. 轮询（5s）监控proc/pid/maps内容，解析出包含包名的动态库，并调用native方法注册hook函数
2. hook函数需要是一个`void*`类型的函数，这里采用占坑的方式提前注册好
3. hook内存申请释放函数: `malloc  calloc realloc memalign aligned_alloc posix_memalign free`
4. 采用消息队列的方式，使用异步线程来不断记录内存的操作
5. 提供导出当前泄露内存信息的native接口
