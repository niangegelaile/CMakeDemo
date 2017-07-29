package com.ange.cmakedemo;

/**
 * Created by liquanan on 2017/5/17.
 * email :1369650335@qq.com
 */

public class Ndk {
    static {
        System.loadLibrary("MyJni");
    }

    public  native String stringFromJNI();
}
