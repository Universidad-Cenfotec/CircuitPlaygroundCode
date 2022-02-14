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

## Botones, Switch y NeoPixel

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

## Sensores

### Sensor de Luz

El sensor de luz lee la intensidad de luz. 
```
CircuitPlayground.lightSensor();
```

La lectura es un voltaje de 0 a 3.3V, sin embargo la function `lightSensor()` retorna un valor de 10bit (0 a 1023)



