package com.yk.cmake_sample;

import android.app.Activity;
import android.os.Bundle;
import android.support.annotation.Nullable;
import android.widget.Toast;

public class MainActivity extends Activity {
    static {
        System.loadLibrary("ndk-cmake-lib");
    }

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Toast.makeText(getApplicationContext(),getC(),Toast.LENGTH_SHORT).show();
    }

    @Override
    protected void onResume() {
        super.onResume();

        Toast.makeText(getApplicationContext(),getCAddAdd(),Toast.LENGTH_SHORT).show();
    }

    /**
     * 调用 C 代码
     * @return
     */
    public static native String getC();
    /**
     * 调用 C ++
     * @return
     */
    public static native String getCAddAdd();

}
