package com.qiu.liang.leak;

/**
 * Created by chenwangwang on 2020/12/8.
 */
class XHook {

    /**
     * 将当前内存泄露的信息导出成字符串
     */
    public static native String dumpLeakInfo();

    public static native boolean hookELFs(String[] elfFileArray);
}
