package cl.tiocomegfas.chronometer;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.Button;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    private Chronometer chronometer;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Button btStart = findViewById(R.id.bt_start);
        Button btStop = findViewById(R.id.bt_stop);

        chronometer = Chronometer.getInstance();

        btStart.setOnClickListener(v -> Chronometer.startClock(chronometer));

        btStop.setOnClickListener(v -> {
            double time = Chronometer.stopClock(chronometer);
            Toast.makeText(this,"time: "+time+" seg",Toast.LENGTH_LONG).show();
        });
    }
}