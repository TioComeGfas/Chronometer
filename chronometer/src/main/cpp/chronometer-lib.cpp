#include <jni.h>
#include <string>
#include "chronometer/Chronometer.h"

extern "C" JNIEXPORT void JNICALL Java_cl_tiocomegfas_chronometer_Chronometer_startClock(JNIEnv *env, jobject clazz) {
    jclass cls = env->GetObjectClass(clazz);

    jmethodID mid = env->GetMethodID(cls, "getUserTime0", "()D");
    double utime0 = env->CallDoubleMethod(clazz, mid);

    mid = env->GetMethodID(cls, "getUserTime1", "()D");
    double utime1 = env->CallDoubleMethod(clazz, mid);

    mid = env->GetMethodID(cls, "getWallTime0", "()D");
    double wtime0 = env->CallDoubleMethod(clazz, mid);

    mid = env->GetMethodID(cls, "getWallTime1", "()D");
    double wtime1 = env->CallDoubleMethod(clazz, mid);

    mid = env->GetMethodID(cls, "getSystemTime0", "()D");
    double stime0 = env->CallDoubleMethod(clazz, mid);

    mid = env->GetMethodID(cls, "getSystemTime1", "()D");
    double stime1 = env->CallDoubleMethod(clazz, mid);

    auto *cronometer = Chronometer::getInstance();
    cronometer->init(utime0, utime1, stime0, stime1, wtime0, wtime1);
    cronometer->startClock(cronometer);

    mid = env->GetMethodID(cls, "setUserTime0", "(D)V");
    env->CallVoidMethod(clazz, mid, cronometer->getUtime0());

    mid = env->GetMethodID(cls, "setUserTime1", "(D)V");
    env->CallVoidMethod(clazz, mid, cronometer->getUtime1());

    mid = env->GetMethodID(cls, "setWallTime0", "(D)V");
    env->CallVoidMethod(clazz, mid, cronometer->getWtime0());

    mid = env->GetMethodID(cls, "setWallTime1", "(D)V");
    env->CallVoidMethod(clazz, mid, cronometer->getWtime1());

    mid = env->GetMethodID(cls, "setSystemTime0", "(D)V");
    env->CallVoidMethod(clazz, mid, cronometer->getStime0());

    mid = env->GetMethodID(cls, "setSystemTime1", "(D)V");
    env->CallVoidMethod(clazz, mid, cronometer->getStime1());

    //limpieza de la memoria
    //env->DeleteLocalRef(cls);
    //env->DeleteLocalRef(reinterpret_cast<jobject>(mid));
}

extern "C" JNIEXPORT jdouble JNICALL Java_cl_tiocomegfas_chronometer_Chronometer_stopClock(JNIEnv *env, jobject clazz) {
    jclass cls = env->GetObjectClass(clazz);

    jmethodID mid = env->GetMethodID(cls, "getUserTime0", "()D");
    double utime0 = env->CallDoubleMethod(clazz, mid);

    mid = env->GetMethodID(cls, "getUserTime1", "()D");
    double utime1 = env->CallDoubleMethod(clazz, mid);

    mid = env->GetMethodID(cls, "getWallTime0", "()D");
    double wtime0 = env->CallDoubleMethod(clazz, mid);

    mid = env->GetMethodID(cls, "getWallTime1", "()D");
    double wtime1 = env->CallDoubleMethod(clazz, mid);

    mid = env->GetMethodID(cls, "getSystemTime0", "()D");
    double stime0 = env->CallDoubleMethod(clazz, mid);

    mid = env->GetMethodID(cls, "getSystemTime1", "()D");
    double stime1 = env->CallDoubleMethod(clazz, mid);

    auto *cronometer = Chronometer::getInstance();
    cronometer->init(utime0, utime1, stime0, stime1, wtime0, wtime1);
    jdouble request = cronometer->stopClock(cronometer);

    mid = env->GetMethodID(cls, "setUserTime0", "(D)V");
    env->CallVoidMethod(clazz, mid, cronometer->getUtime0());

    mid = env->GetMethodID(cls, "setUserTime1", "(D)V");
    env->CallVoidMethod(clazz, mid, cronometer->getUtime1());

    mid = env->GetMethodID(cls, "setWallTime0", "(D)V");
    env->CallVoidMethod(clazz, mid, cronometer->getWtime0());

    mid = env->GetMethodID(cls, "setWallTime1", "(D)V");
    env->CallVoidMethod(clazz, mid, cronometer->getWtime1());

    mid = env->GetMethodID(cls, "setSystemTime0", "(D)V");
    env->CallVoidMethod(clazz, mid, cronometer->getStime0());

    mid = env->GetMethodID(cls, "setSystemTime1", "(D)V");
    env->CallVoidMethod(clazz, mid, cronometer->getStime1());

    //limpieza de la memoria
    //env->DeleteLocalRef(cls);
    //env->DeleteLocalRef(reinterpret_cast<jobject>(mid));

    return request;
}
