package com.aweirdtrashcan.ndktutorial

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.TextView

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val math = Math()
        val cal = findViewById<TextView>(R.id.calcu)
        val mBtn: Button = findViewById(R.id.mBtn)
        mBtn.setOnClickListener {
            cal.text = math.someCrazyMath(493, 90943).toString()
        }
    }
}