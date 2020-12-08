package com.qiu.liang.leak;

import java.io.BufferedInputStream;
import java.io.ByteArrayOutputStream;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;

/**
 * Created by chenwangwang on 2020/12/8.
 */
class IOUtils {

    public static String readStr(File targetFile) throws IOException {
        if (!targetFile.exists()) {
            return "";
        }
        BufferedInputStream inputStream = null;
        ByteArrayOutputStream bos = null;
        try {
            inputStream = new BufferedInputStream(new FileInputStream(targetFile));
            bos = new ByteArrayOutputStream();
            byte[] buffer = new byte[4096];
            int len;

            while ((len = inputStream.read(buffer)) != -1) {
                bos.write(buffer, 0, len);
            }
            return new String(bos.toByteArray());
        } catch (IOException e) {
            ProfLog.printErrStackTrace(e);
            throw e;
        } finally {
            closeAllQuietly(inputStream, bos);
        }
    }

    public static void closeAllQuietly(Closeable... closeable) {
        if (closeable == null) {
            return;
        }
        for (Closeable c : closeable) {
            if (c != null) {
                try {
                    c.close();
                } catch (IOException ioe) {
                    // ignore
                }
            }
        }
    }

}
