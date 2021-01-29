[![](https://jitpack.io/v/TioComeGfas/Chronometer.svg)](https://jitpack.io/#TioComeGfas/Chronometer)


Esta pequeña libreria tiene por objetivo ayudar a obtener los tiempos de ejecución reales considerando las rafagas del procesador al ejecutar el proceso.

## Como usar

A continuación se presentará a la forma de utilizar esta libreria:

- Inicializar libreria:
```Java
//Obtiene una instancia del objeto Chronometer y deja todo
//preparado para ser utilizado
Chronometer cronometro = Chronometer.getInstance();
```

- Comenzar reloj:
```Java
/**
* Metodo estatico de la clase cl.tiocomegfas.chronometer.Chronometer que tiene por
* objetivo, iniciar el cronometro.
* @param cronometro: Objeto que almacena el cronometro y es creado con anterioridad
* @return void
*/
Chronometro.startClock(cronometro);
```

- Terminar reloj:
```Java
/**
* Metodo estatico de la clase cl.tiocomegfas.chronometer.Chronometer que tiene por
* objetivo, detener el cronometro, entregando el tiempo transcurrido.
* @param cronometro: Objeto que almacena el cronometro y es creado con anterioridad.
* @return double: tiempo transcurrido en segundos.
*/
Chronometro.stopClock(cronometro);
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
   implementation 'com.github.TioComeGfas:Chronometer:Tag'
}
```

## Requisitos
- SDK MIN: API 21
- SDK MAX: API 30

## Licencia
- El codigo fuente de C++ fue creado por el DR. Miguel Romero, yo solo exporte su libreria para que corriera en Android.

      MIT License

      Copyright (c) 2021 Fredy Moncada

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
