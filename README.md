[![](https://jitpack.io/v/TioComeGfas/Chronometer.svg)](https://jitpack.io/#TioComeGfas/Chronometer)

Si necesitas obtener el tiempo real que consume un algoritmo o acción dentro de tu aplicación, con esta libreria puedes obtenerlos.

## WIKI

A continuación se presentará a la forma de utilizar esta libreria:

- How to use (Kotlin):
```Kotlin
//Obtiene una instancia del objeto Chronometer y deja todo preparado para ser utilizado
val chronometer: Chronometer = Chronometer()
chronometer.startClock()

... 

val time = chronometer.stopClock()
Log.d(javaClass::getName.toString(), "time: $time")
```
- How to use (Java):
```Kotlin
//Obtiene una instancia del objeto Chronometer y deja todo preparado para ser utilizado
Chronometer chronometer = new Chronometer();
chronometer.startClock();

... 

double time = chronometer.stopClock();
Log.d(getName.toString(), "time: "+ time);
```


## Instalación

- Paso 1. Agregue el repositorio de JitPack a su archivo de compilación

```Gradle
allprojects {
    repositories {
        maven { url 'https://jitpack.io' }
    }
}
```

- Paso 2. Agrega la dependencia

```Gradle
dependencies {
   implementation 'com.github.TioComeGfas:Chronometer:1.1'
}
```

## Requisitos
- SDK MIN: API 21
- SDK MAX: API 31

## Licencia
- El codigo fuente de C++ fue creado por el DR. Miguel Romero, yo solo exporte su libreria para que corriera en Android.

      MIT License

      Copyright (c) 2021 TioComeGfas

      Permission is hereby granted, free of charge, to any person obtaining a copy
      of this software and associated documentation files (the "Software"), to deal
      in the Software without restriction, including without limitation the rights
      to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
      copies of the Software, and to permit persons to whom the Software is
      furnished to do so, subject to the following conditions:

      The above copyright notice and this permission notice shall be included in all
      copies or substantial portions of the Software.

      THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
      IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
      FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
      AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
      LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
      OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
      SOFTWARE.
