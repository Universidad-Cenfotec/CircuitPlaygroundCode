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

## Uso de botones

Las siguientes funciones retornan verdadero `true` si el respectivo botón es presionado
```
CircuitPlayground.leftButton()
CircuitPlayground.rightButton()
```

