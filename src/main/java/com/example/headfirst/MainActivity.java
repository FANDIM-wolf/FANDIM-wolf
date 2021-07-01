package com.example.headfirst;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Spinner;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

    }

    //Called when the user clicks the button
    public void onClickFindBeer(View view){
        //get link of TextView
        TextView brands = (TextView) findViewById(R.id.brands);
        //get link of Spinner
        Spinner color = (Spinner) findViewById(R.id.spinner);
        //get color of beer (get string data)
        String beerType  = String.valueOf(color.getSelectedItem());
        //show type of beer 
        brands.setText(beerType);


    }

}