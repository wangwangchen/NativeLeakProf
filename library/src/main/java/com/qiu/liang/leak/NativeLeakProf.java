package com.qiu.liang.leak;

import android.app.Application;
import android.content.Context;

/**
 * Created by chenwangwang on 2020/12/8.
 */
public class NativeLeakProf {

    public static void init(Context context) {
        if (!(context instanceof Application)) {
            context = context.getApplicationContext();
        }
        ProfLog.i("NativeLeakProf init");
        XHook.init(context);
        MapsMonitor.init(context);
    }

}
