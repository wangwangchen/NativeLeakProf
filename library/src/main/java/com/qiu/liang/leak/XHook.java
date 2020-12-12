package com.qiu.liang.leak;

/**
 * Created by chenwangwang on 2020/12/8.
 */
class XHook {

    /**
     * hook一个动态库的内存处理函数
     * @param elfFile 动态库名字不带.so后缀
     */
    public static native void hookELF(String elfFile);

    /**
     * 将当前内存泄露的信息导出成字符串
     */
    public static native String dumpLeakInfo();

    public static native void hookELFs(String[] elfFileArray);
}
