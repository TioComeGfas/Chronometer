//
// Created by Fredy Camilo Moncada Contreras on 1/28/21.
//

#ifndef CHRONOMETER_CHRONOMETER_H
#define CHRONOMETER_CHRONOMETER_H

#include <sys/resource.h>
#include <sys/time.h>
#include <malloc.h>
#include <cstdlib>

class Chronometer {
private:
    double utime0;
    double stime0;
    double wtime0;
    double utime1;
    double stime1;
    double wtime1;

private:
    /**
     * Contructor privado
     */
    Chronometer();

    void uswtime(double *usertime, double *systime, double *walltime);

public:

    void init(double utime0, double utime1, double stime0, double stime1,double wtime0, double wtime1);

    /**
     * Entrega una nueva instancia
     * @return Instancia nueva de Cronometer
     */
    static Chronometer* getInstance();

    /**
     * inicia o reinicia el cronómetro cronom
     * @param cronom
     */
    void startClock(Chronometer*);

    /**
     * Detiene el cronómetro y devuelve el timepo de CPU (user+system) en segundos
     * si el cronometro no se ha inciado retorna un valor negativo.
     *
     * @param cronom
     * @return
     */
    double stopClock(Chronometer*);

    /**
     * Entrega los tiempos si el cronometro esta detenido, de otro modo entrega -1
     * @param cronom
     * @return
     */
    double userTime(Chronometer*);

    /**
     *
     * @param cronom
     * @return
     */
    double sysTime(Chronometer*);

    /**
     *
     * @param cronom
     * @return
     */
    double wallTime(Chronometer*);

    double getUtime0() const;

    double getStime0() const;

    double getWtime0() const;

    double getUtime1() const;

    double getStime1() const;

    double getWtime1() const;
};


#endif //CHRONOMETER_CHRONOMETER_H
