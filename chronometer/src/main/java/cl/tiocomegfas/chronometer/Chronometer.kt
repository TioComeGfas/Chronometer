package cl.tiocomegfas.chronometer

class Chronometer(
    var userTime0: Double = 0.0, // USER TIME START
    var systemTime0: Double = 0.0, // SYSTEM TIME START
    var wallTime0: Double = 0.0, // WALL TIME START
    var userTime1: Double = 0.0, // USER TIMER END
    var systemTime1: Double = 0.0, // SYSTEM TIME END
    var wallTime1: Double = 0.0, // WALL TIME END
) {
    init {
        System.loadLibrary("chronometer-lib")
    }

    external fun startClock()

    external fun stopClock(): Double
}