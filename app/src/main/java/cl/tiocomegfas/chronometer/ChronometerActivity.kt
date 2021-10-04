package cl.tiocomegfas.chronometer

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import cl.tiocomegfas.chronometer.databinding.ActivityChronometerBinding

class ChronometerActivity : AppCompatActivity() {
    private var binding: ActivityChronometerBinding? = null
    private val chronometer: Chronometer by lazy { Chronometer() }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityChronometerBinding.inflate(layoutInflater)
        setContentView(binding?.root)
        configureCallback()
    }

    private fun configureCallback() {
        binding?.let {
            it.btStart.setOnClickListener {
                chronometer.startClock()
            }

            it.btStop.setOnClickListener {
                val time = chronometer.stopClock()
                Log.d(javaClass::getName.toString(), "time: $time")
            }
        }
    }


    override fun onDestroy() {
        super.onDestroy()
        binding = null
    }
}