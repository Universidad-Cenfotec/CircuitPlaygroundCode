# Guía de Comandos C/C++ para Circuit Playground
[Tomás de Camino Beck, Ph.D](https://github.com/tomasdecamino)

## Código base

Al iniciar un código en C/C++ siempre tendremos:

```
#include <Adafruit_CircuitPlayground.h>

void setup() {
  //Inicia el Circuit Playground
  CircuitPlayground.begin();
}

void loop(){

}
```

La línea `#include <Adafruit_CircuitPlayground.h>` da acceso a la librería de comandos para el Circuit Playground. Para instalar la librería del CP, seguir [estas instrucciones](https://learn.adafruit.com/circuit-playground-lesson-number-0/circuit-playground-library).  La linea `CircuitPlayground.begin();` inicia el circuit playground.  Todo código para programar el Circuit Playground tiene este código de base.

# Comandos para accesar sensores del CP

## Botones, Switch, Parlante y NeoPixel

### Botones
Las siguientes funciones retornan verdadero `true` si el respectivo botón es presionado
```
CircuitPlayground.leftButton()
CircuitPlayground.rightButton()
```

### Slide switch

El switch retorna `true` o `false` depediendo si está a la derecha o a la izquierda,

```
CircuitPlayground.slideSwitch()
```
### Neopixeles

Para manejar los neopixeles hay varias funciones:

```
CircuitPlayground.clearPixels()
CircuitPlayground.setPixelColor(n,r,g,b)
CircuitPlayground.setBrightness(b)
``` 
La función `clearPixels()` apaga todos los neopixeles. Para cambiar los colores de cada neopixel, se utiliza `setPixelColor(n,r,g,b)`, donde `n` es el número de neopixel (de 0 a 9), `r,g,b` corresponden a valores de 0 a 255, de colores RGB.  `setBrightness(b)` cambia la intensidad de los neopixeles (con `b`de 0 a 255).

### Parlante

Se activa con la función:
```
CircuitPlayground.playTone(freq, time, wait=true);
```
Donde `playTone(freq, time, wait=true)` se indica la frecuencia en hertz `freq`, la duración de la nota `time` en milisegundos, y `wait=true o false` si debe esperar que termine para continuar con el código. (puede sonar solo una nota a la vez)

## Sensores

### Sensor de Luz

El sensor de luz lee la intensidad de luz. 
```
CircuitPlayground.lightSensor();
```

La lectura es un voltaje de 0 a 3.3V, sin embargo la function `lightSensor()` retorna un valor de 10bit (0 a 1023)

### Micrófono 

El micrófono es un sensor de sonido, que leed una señal sonora, de la siguiente manera,
```
CircuitPlayground.soundSensor();
```
La función `soundSensor()` devuelve un valor entre 0 y 1023

### Acelerómetro

Este es uno de los sensores más prácticso de esta placa.  Permite medir la aceleración en 3 ejes de la siguiente manera:
```
CircuitPlayground.motionX()
CircuitPlayground.motionY()
CircuitPlayground.motionZ()
CircuitPlayground.setAccelRange(range)
CircuitPlayground.setAccelTap(c, clickthresh)
CircuitPlayground.getAccelTap()
```
Las funciones `motionX()` devuelve la aceleración como un número de punto flotante (`float`) en m/s2 (para X, Y y Z). La función `setAccelRange(range)` define el rango de aceleración que deseamos detectar (donde `range` puede ser cualquiera de los valores `LIS3DH_RANGE_16_G`, `LIS3DH_RANGE_8_G`, `LIS3DH_RANGE_4_G`, `LIS3DH_RANGE_2_G `).

La función `setAccelTap(c, clickthresh)` enciende la función de tap (detectar un golpe en el CP), donde  `c` puede ser 0 = off, 1 = single tap, 2 = double tap; y `clickthresh`  determina que tan intenso debe ser el golpe (valor de 0 a 255). Luego la función `getAccelTap()` devuelve 0,1 y 2 o 3 si el CP ha sido golpeado ninguna, una o dos veces respectivamente.

### Temperatura
```
CircuitPlayground.temperature()
CircuitPlayground.temperatureF()
```
Estas funciones devuelven la temperatura en grados centígrados (con `temperature()`) o en grados Fahrenheight (con `temperatureF()`)

### Sensores capacitivos

Cada uno de los pads del CP, son sensopres capacitivos que detectan cuando son tocados. La función:
```
CircuitPlayground.readCap(s);
```
Lee el sensor capacitivo `s` que puede ser 0, 1, 2, 3, 6, 9, 10, o 12, y devuelve `true` si ha sido tocado.



