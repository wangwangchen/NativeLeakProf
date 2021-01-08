# NativeLeakProf
Android  Native代码（C/C++）内存泄露分析

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

### 获取动态库泄露内存大小列表信息
```
NativeLeakProf.dumpLeakInfo();
```
通过`dumpLeakInfo`方法，可以导出如下的字符串信息
```
libGLESv2_adreno.so leak: 2.258709MB
libhwui.so leak: 439.270508KB
libc.so leak: 26.500000KB

total leak: 2.713563MB
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

### 样例（有待完善）
![demo](https://github.com/wangwangchen/NativeLeakProf/blob/master/sample/sample.jpg)
