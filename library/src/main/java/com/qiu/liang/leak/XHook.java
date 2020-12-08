package com.qiu.liang.leak;

import android.content.Context;

/**
 * Created by chenwangwang on 2020/12/8.
 */
class XHook {

    static {
        System.loadLibrary("xhook");
    }

    static void init(Context context) {
        nativeInit();
    }

    static native void nativeInit();

    public static native void register(String elfFile);
}
