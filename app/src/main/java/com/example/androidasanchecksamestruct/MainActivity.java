package com.example.androidasanchecksamestruct;

import androidx.appcompat.app.AppCompatActivity;
import androidx.lifecycle.MutableLiveData;
import androidx.lifecycle.Observer;
import androidx.lifecycle.ViewModelProvider;

import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    private Button mBut;

    static {
        System.loadLibrary("asandemo");
    }

    public native String stringFromJNI();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        mBut = findViewById(R.id.but);
        mBut.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                stringFromJNI();
            }
        });


    }
}