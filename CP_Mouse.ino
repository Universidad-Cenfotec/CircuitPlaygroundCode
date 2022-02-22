//Universidad Cenfotec
//Escuela de Sistemas Inteligentes
//Curso Introducción a Tecnologías de Información
//Tomás de Camino Beck, Ph.D.

//Usa el Circuit Playground como Mouse (con el cable hacia adelante)

#include <Adafruit_CircuitPlayground.h>
#include <Mouse.h>
#include <Wire.h>
#include <SPI.h>

#define SENS 2 //que tan sensible

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  int mX = -CircuitPlayground.motionX() / SENS;
  int mY = CircuitPlayground.motionY() / SENS;
  //usa medida acelerometro para mover mouse
  Mouse.move(mX, mY, 0);

  //botón izquierdo
  if (CircuitPlayground.leftButton()) {
    Mouse.press(MOUSE_LEFT);
  } else {
    Mouse.release(MOUSE_LEFT);
  }

  //botón derecho
  if (CircuitPlayground.rightButton()) {
    Mouse.press(MOUSE_RIGHT);
  } else {
    Mouse.release(MOUSE_LEFT);
  }

}
