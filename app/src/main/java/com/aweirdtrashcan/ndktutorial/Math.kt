package com.aweirdtrashcan.ndktutorial

class Math {

    companion object {
        init {
            System.loadLibrary("ndktutorial")
        }
    }

    external fun add(a: Int, b: Int): Int
    external fun someCrazyMath(a: Int, b: Int): Float
}