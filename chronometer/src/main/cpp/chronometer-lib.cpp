#include <jni.h>
#include <string>
#include "chronometer/Chronometer.h"

extern "C" JNIEXPORT void JNICALL Java_cl_tiocomegfas_chronometer_Chronometer_startClock(JNIEnv *env, jclass clazz, jobject chronometer_api) {
    jclass cls = env->GetObjectClass(chronometer_api);

    jmethodID mid = env->GetMethodID(cls, "getUtime0", "()D");
    double utime0 = env->CallDoubleMethod(chronometer_api, mid);

    mid = env->GetMethodID(cls, "getUtime1", "()D");
    double utime1 = env->CallDoubleMethod(chronometer_api, mid);

    mid = env->GetMethodID(cls, "getWtime0", "()D");
    double wtime0 = env->CallDoubleMethod(chronometer_api, mid);

    mid = env->GetMethodID(cls, "getWtime1", "()D");
    double wtime1 = env->CallDoubleMethod(chronometer_api, mid);

    mid = env->GetMethodID(cls, "getStime0", "()D");
    double stime0 = env->CallDoubleMethod(chronometer_api, mid);

    mid = env->GetMethodID(cls, "getStime1", "()D");
    double stime1 = env->CallDoubleMethod(chronometer_api, mid);

    auto *cronometer = Chronometer::getInstance();
    cronometer->init(utime0, utime1, stime0, stime1, wtime0, wtime1);
    cronometer->startClock(cronometer);

    mid = env->GetMethodID(cls, "setUtime0", "(D)V");
    env->CallVoidMethod(chronometer_api, mid, cronometer->getUtime0());

    mid = env->GetMethodID(cls, "setUtime1", "(D)V");
    env->CallVoidMethod(chronometer_api, mid, cronometer->getUtime1());

    mid = env->GetMethodID(cls, "setWtime0", "(D)V");
    env->CallVoidMethod(chronometer_api, mid, cronometer->getWtime0());

    mid = env->GetMethodID(cls, "setWtime1", "(D)V");
    env->CallVoidMethod(chronometer_api, mid, cronometer->getWtime1());

    mid = env->GetMethodID(cls, "setStime0", "(D)V");
    env->CallVoidMethod(chronometer_api, mid, cronometer->getStime0());

    mid = env->GetMethodID(cls, "setStime1", "(D)V");
    env->CallVoidMethod(chronometer_api, mid, cronometer->getStime1());

    //limpieza de la memoria
    //env->DeleteLocalRef(cls);
    //env->DeleteLocalRef(reinterpret_cast<jobject>(mid));
}

extern "C" JNIEXPORT jdouble JNICALL Java_cl_tiocomegfas_chronometer_Chronometer_stopClock(JNIEnv *env, jclass clazz, jobject chronometer_api) {
    jclass cls = env->GetObjectClass(chronometer_api);

    jmethodID mid = env->GetMethodID(cls, "getUtime0", "()D");
    double utime0 = env->CallDoubleMethod(chronometer_api, mid);

    mid = env->GetMethodID(cls, "getUtime1", "()D");
    double utime1 = env->CallDoubleMethod(chronometer_api, mid);

    mid = env->GetMethodID(cls, "getWtime0", "()D");
    double wtime0 = env->CallDoubleMethod(chronometer_api, mid);

    mid = env->GetMethodID(cls, "getWtime1", "()D");
    double wtime1 = env->CallDoubleMethod(chronometer_api, mid);

    mid = env->GetMethodID(cls, "getStime0", "()D");
    double stime0 = env->CallDoubleMethod(chronometer_api, mid);

    mid = env->GetMethodID(cls, "getStime1", "()D");
    double stime1 = env->CallDoubleMethod(chronometer_api, mid);

    auto *cronometer = Chronometer::getInstance();
    cronometer->init(utime0, utime1, stime0, stime1, wtime0, wtime1);
    jdouble request = cronometer->stopClock(cronometer);

    mid = env->GetMethodID(cls, "setUtime0", "(D)V");
    env->CallVoidMethod(chronometer_api, mid, cronometer->getUtime0());

    mid = env->GetMethodID(cls, "setUtime1", "(D)V");
    env->CallVoidMethod(chronometer_api, mid, cronometer->getUtime1());

    mid = env->GetMethodID(cls, "setWtime0", "(D)V");
    env->CallVoidMethod(chronometer_api, mid, cronometer->getWtime0());

    mid = env->GetMethodID(cls, "setWtime1", "(D)V");
    env->CallVoidMethod(chronometer_api, mid, cronometer->getWtime1());

    mid = env->GetMethodID(cls, "setStime0", "(D)V");
    env->CallVoidMethod(chronometer_api, mid, cronometer->getStime0());

    mid = env->GetMethodID(cls, "setStime1", "(D)V");
    env->CallVoidMethod(chronometer_api, mid, cronometer->getStime1());

    //limpieza de la memoria
    //env->DeleteLocalRef(cls);
    //env->DeleteLocalRef(reinterpret_cast<jobject>(mid));

    return request;
}