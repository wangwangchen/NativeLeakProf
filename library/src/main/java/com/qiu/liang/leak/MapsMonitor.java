package com.qiu.liang.leak;

import android.content.Context;
import android.os.Process;

import java.io.File;
import java.io.IOException;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

/**
 * Created by chenwangwang on 2020/12/8.
 */
class MapsMonitor {

    private static File sMapsFile = new File("/proc/" + Process.myPid() + "/maps");
    private static Context sContext;
    private static String sPackageName;

    private static Set<String> sELFSets = new HashSet<>();

    public static void init(Context context) {
        sContext = context.getApplicationContext();
        sPackageName = context.getPackageName();
        new Thread(() -> {
            while (true) {
                check();
                try {
                    Thread.sleep(5000);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }).start();
    }

    private static void check() {
        try {
            String maps = IOUtils.readStr(sMapsFile);
            if (maps == null) {
                return;
            }
            String[] split = maps.split("\n");
            for (String line : split) {
                if (line.contains(sPackageName) && line.endsWith(".so") && !line.contains("xhook.so")) {
                    String elfFile = line.substring(line.lastIndexOf("/") + 1, line.lastIndexOf(".so"));
                    if (sELFSets.contains(elfFile)) {
                        return;
                    }
                    XHook.register(elfFile);
                    sELFSets.add(elfFile);
                    ProfLog.i("hook:" + elfFile);
                }
            }
        } catch (IOException e) {
            ProfLog.printErrStackTrace(e);
        }
    }

}
