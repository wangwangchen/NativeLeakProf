package com.qiu.liang.leak.prof

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView
import com.qiu.liang.leak.NativeLeakProf
import kotlin.concurrent.thread

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        // Example of a call to a native method
        val textView = findViewById<TextView>(R.id.sample_text)
        textView.text = stringFromJNI()

        thread {
            while (true) {
                val dumpLeakInfo = NativeLeakProf.dumpLeakInfo()
                runOnUiThread {
                    textView.text = dumpLeakInfo
                }
                Thread.sleep(3000)
            }
        }
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    external fun stringFromJNI(): String

    companion object {
        // Used to load the 'native-lib' library on application startup.
        init {
            System.loadLibrary("appLib")
        }
    }
}