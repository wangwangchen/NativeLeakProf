# NativeLeakProf
Android  Native代码（C/C++）内存泄露分析


# 主要思路
- 使用PTL方式Hook内存申请，参考：[XHook](https://github.com/iqiyi/xHook)                
- 释放内存时，需要移除对应的申请堆栈                                                
- 借鉴XCrash获取线程堆栈数据，参考：[XCrash](https://github.com/iqiyi/xCrash)      
- 最后导出的内存申请堆栈做成火焰图，参考：[如何读懂火焰图？](http://www.ruanyifeng.com/blog/2017/09/flame-graph.html)以及[FlameGraph](https://github.com/brendangregg/FlameGraph)                                  


# 已完成
1. 轮询监控proc/pid/maps内容，解析出包含包名的动态库，并调用native方法注册hook函数
2. hook函数需要是一个`void*`类型的函数，这里采用占坑的方式提前注册好
3. hook内存申请释放函数: `malloc  calloc realloc memalign aligned_alloc posix_memalign free`
4. 采用消息队列的方式，使用异步线程来不断记录内存的操作
5. 提供导出当前泄露内存信息的native接口
6. 在内存操作函数中获取调用堆栈
7. 导出调用栈数据
8. 解析调用栈数据(脚本+addr2line  或者   GUI+addr2line）
9. 生成[FlameGraph](https://github.com/brendangregg/FlameGraph)格式数据，并解析得到火焰图

# 使用
### 初始化
在Application的attachBaseContext方法里调用
```
@Override
protected void attachBaseContext(Context base) {
    super.attachBaseContext(base);
    NativeLeakProf.init(this);
}
```

### 堆栈导出
调用`dumpLeakStack`方法导出堆栈，位置在`/data/data/xxx.xxx.xxx/files/NativeLeakProf_Stack_xxxxx.txt`
```
NativeLeakProf.dumpLeakStack();
```

### 解析堆栈
调用`nl_stack_parser.py`这个python脚本来解析`堆栈数据`（自行通过adb pull导出到电脑），举个栗子
```
/usr/bin/python ~/Documents/AndroidProject/NativeLeakProf/nlp_stack_parser.py ~/android/android-sdk-macosx/ndk-bundle/ ~/Documents/AndroidProject/NativeLeakProf/sample/NativeLeakProf_Stack_c39243bb-4132-4da2-88d9-1e0cfec38627.txt arm64-v8a ~/Documents/AndroidProject/NativeLeakProf/app/build/intermediates/cmake/debug/obj/arm64-v8a/
```
参数如下
```
/usr/bin/python ~/Documents/AndroidProject/NativeLeakProf/nlp_stack_parser.py "android ndk路径" "stack文件路径" "arm架构（armeabi/armeabi-v7a/arm64-v8a）" "带符号表so所在目录"
```

# 下一步工作
1. 完善addr2line的兼容架构类型
2. 完善堆栈解析结果
