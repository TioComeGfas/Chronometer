//
// Created by Fredy Camilo Moncada Contreras on 1/28/21.
//

#include "Chronometer.h"

Chronometer::Chronometer() {
    this->utime0 = 0;
    this->utime1 = 0;
    this->stime0 = 0;
    this->stime1 = 0;
    this->wtime0 = 0;
    this->wtime1 = 0;
}

Chronometer *Chronometer::getInstance() {
    return new Chronometer();
}

void Chronometer::startClock(Chronometer *cronom) {
    uswtime(&cronom->utime0, &cronom->stime0, &cronom->wtime0);
}

double Chronometer::stopClock(Chronometer *cronom) {
    uswtime(&cronom->utime1, &cronom->stime1, &cronom->wtime1);
    return (cronom->utime1 - cronom->utime0 + cronom->stime1 - cronom->stime0);
}

double Chronometer::userTime(Chronometer *cronom) {
    return (cronom->utime1!=0) ? cronom->utime1 - cronom->utime0: - 1;
}

double Chronometer::sysTime(Chronometer *cronom) {
    return (cronom->stime1!=0) ? cronom->stime1 - cronom->stime0: -1;
}

double Chronometer::wallTime(Chronometer *cronom) {
    return (cronom->wtime1!=0) ? cronom->wtime1 - cronom->wtime0: -1;
}

void Chronometer::init(double utime0, double utime1, double stime0, double stime1, double wtime0, double wtime1) {
    this->utime0 = utime0;
    this->utime1 = utime1;
    this->stime0 = stime0;
    this->stime1 = stime1;
    this->wtime0 = wtime0;
    this->wtime1 = wtime1;
}

void Chronometer::uswtime(double *usertime, double *systime, double *walltime) {
    struct rusage buffer;
    struct timeval tp;
    struct timezone tzp;

    getrusage(RUSAGE_SELF, &buffer);
    gettimeofday(&tp, &tzp);
    *usertime = (double) buffer.ru_utime.tv_sec + 1.0e-6 * buffer.ru_utime.tv_usec;
    *systime = (double) buffer.ru_stime.tv_sec + 1.0e-6 * buffer.ru_stime.tv_usec;
    *walltime = (double) tp.tv_sec + 1.0e-6 * tp.tv_usec;
}

double Chronometer::getUtime0() const {
    return utime0;
}

double Chronometer::getStime0() const {
    return stime0;
}

double Chronometer::getWtime0() const {
    return wtime0;
}

double Chronometer::getUtime1() const {
    return utime1;
}

double Chronometer::getStime1() const {
    return stime1;
}

double Chronometer::getWtime1() const {
    return wtime1;
}