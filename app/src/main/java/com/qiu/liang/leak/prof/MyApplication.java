package com.qiu.liang.leak.prof;

import android.app.Application;
import android.content.Context;

import com.qiu.liang.leak.NativeLeakProf;

/**
 * Created by chenwangwang on 2020/12/8.
 */
public class MyApplication extends Application {

    @Override
    protected void attachBaseContext(Context base) {
        super.attachBaseContext(base);
        NativeLeakProf.init(this);
    }
}
