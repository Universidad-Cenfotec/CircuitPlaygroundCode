# Guía de Comandos C/C++ para Circuit Playground

## Código base

Al iniciar un código en C/C++ siempre tendremos:

`#include <Adafruit_CircuitPlayground.h>

void setup() {
  //Inicia el Circuit Playground
  CircuitPlayground.begin();
}

void loop(){

}
`

La línea `#include <Adafruit_CircuitPlayground.h>` da acceso a la librería de comandos para el Circuit Playground, y la linea `CircuitPlayground.begin();` inicia el circuit playground.  Todo código para programar el Circuit Playfground tiene este código de base.

#Comandos para accesar sensores del CP

