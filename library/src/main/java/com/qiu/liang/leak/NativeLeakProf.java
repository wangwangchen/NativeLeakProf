package com.qiu.liang.leak;

import android.app.Application;
import android.content.Context;

/**
 * Created by chenwangwang on 2020/12/8.
 */
public class NativeLeakProf {

    static final String LIBRARY_NAME = "nleakprf";

    static {
        System.loadLibrary(LIBRARY_NAME);
    }

    public static void init(Context context) {
        if (!(context instanceof Application)) {
            context = context.getApplicationContext();
        }
        ProfLog.i("NativeLeakProf init");
        MapsMonitor.init(context);
    }

    public static String dumpLeakInfo() {
        return XHook.dumpLeakInfo();
    }

}
