package com.qiu.liang.leak;

import android.content.Context;
import android.os.Process;

import java.io.File;
import java.io.IOException;
import java.util.HashSet;
import java.util.Set;

import static com.qiu.liang.leak.NativeLeakProf.LIBRARY_NAME;

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
                    Thread.sleep(1500);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }).start();
    }

    private static void check() {
        try {

            long timeMillis = System.currentTimeMillis();

//            ProfLog.i("Native Leak Info:\n" + XHook.dumpLeakInfo());

            String maps = IOUtils.readStr(sMapsFile);
            if (maps == null) {
                return;
            } else {
//                ProfLog.i(maps);
            }

            int oldSize = sELFSets.size();
            String[] split = maps.split("\n");
            for (String line : split) {
                if (!line.endsWith(".so") || line.contains(LIBRARY_NAME)) {
                    continue;
                }
                if (line.contains(sPackageName) || isSystemLibs(line)) {
                    String elfFile = line.substring(line.lastIndexOf("/") + 1, line.lastIndexOf(".so"));
                    if (sELFSets.contains(elfFile)) {
                        continue;
                    }
                    sELFSets.add(elfFile);
                    ProfLog.i("hook:" + line);
                }
            }
            if (sELFSets.size() != oldSize) {
                XHook.hookELFs(sELFSets.toArray(new String[0]));
            }

            ProfLog.i("check proc/pid/maps cost time: " + (System.currentTimeMillis() - timeMillis));
        } catch (IOException e) {
            ProfLog.printErrStackTrace(e);
        }
    }

    private static boolean isSystemLibs(String line) {
        return line.endsWith("libc.so") ||  line.endsWith("libart.so")
                || line.endsWith("libGLESv2_adreno.so") || line.endsWith("libhwui.so");
    }

}
