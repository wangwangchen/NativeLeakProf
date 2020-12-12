package com.qiu.liang.leak;

import android.util.Log;

import java.io.IOException;

/**
 * Created by chenwangwang on 2020/12/8.
 */
class ProfLog {
    private static String TAG = "NativeLeakProf";

    public static void printErrStackTrace(IOException e) {
        Log.e(TAG, Log.getStackTraceString(e));
    }

    public static void i(String msg) {
        Log.i(TAG, msg);
    }
}
