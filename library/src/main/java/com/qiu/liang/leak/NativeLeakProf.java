package com.qiu.liang.leak;

import android.app.Application;
import android.content.Context;

import java.io.File;
import java.io.IOException;
import java.util.UUID;

/**
 * Created by chenwangwang on 2020/12/8.
 */
public class NativeLeakProf {

    static final String LIBRARY_NAME = "nleakprf";
    private static Context sContext;

    static {
        System.loadLibrary(LIBRARY_NAME);
    }

    public static void init(Context context) {
        if (!(context instanceof Application)) {
            context = context.getApplicationContext();
        }
        sContext = context;
        ProfLog.i("NativeLeakProf init");
        MapsMonitor.init(context);
    }

    public static String dumpLeakInfo() {
        return XHook.dumpLeakInfo();
    }

    /**
     * 导出泄露堆栈
     * @return 内容导出后的文件
     */
    public static File dumpLeakStack() {
        File file = new File(sContext.getFilesDir(), "NativeLeakProf_Stack_" + UUID.randomUUID().toString() + ".txt");
        XHook.dumpLeakStack(file.getAbsolutePath());
        try {
            String s = IOUtils.readStr(file);
            ProfLog.i(s);
        } catch (IOException e) {
            ProfLog.printErrStackTrace(e);
        }
        return file;
    }
}
