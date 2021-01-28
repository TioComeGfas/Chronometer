package cl.tiocomegfas.chronometer;

public class Chronometer {

    /**
     * Carga de la libreria en C++
     */
    static {
        System.loadLibrary("cronometer-lib");
    }

    private static final Chronometer API = new Chronometer();

    private double utime0;
    private double stime0;
    private double wtime0;
    private double utime1;
    private double stime1;
    private double wtime1;

    private Chronometer(){
        utime0 = 0;
        stime0 = 0;
        wtime0 = 0;
        utime1 = 0;
        stime1 = 0;
        wtime1 = 0;
    }

    public static Chronometer getInstance(){
        return API;
    }

    public double getUtime0() {
        return utime0;
    }

    public void setUtime0(double utime0) {
        this.utime0 = utime0;
    }

    public double getStime0() {
        return stime0;
    }

    public void setStime0(double stime0) {
        this.stime0 = stime0;
    }

    public double getWtime0() {
        return wtime0;
    }

    public void setWtime0(double wtime0) {
        this.wtime0 = wtime0;
    }

    public double getUtime1() {
        return utime1;
    }

    public void setUtime1(double utime1) {
        this.utime1 = utime1;
    }

    public double getStime1() {
        return stime1;
    }

    public void setStime1(double stime1) {
        this.stime1 = stime1;
    }

    public double getWtime1() {
        return wtime1;
    }

    public void setWtime1(double wtime1) {
        this.wtime1 = wtime1;
    }

    public native void startClock(Chronometer cronometerAPI);

    public native double stopClock(Chronometer cronometerAPI);

}
