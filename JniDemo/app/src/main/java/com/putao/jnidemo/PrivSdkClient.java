package com.putao.jnidemo;

public class PrivSdkClient {

    static {
        System.loadLibrary("testjni");
        System.loadLibrary("test");

    }

    public native String test();
}
