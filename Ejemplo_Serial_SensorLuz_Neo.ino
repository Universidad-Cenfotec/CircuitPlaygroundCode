//Universidad Cenfotec
//Curso Introducción a Tecnologías de Información
// Tomás de Camino Beck

// video https://youtu.be/45QxyBRKQ00

//Carga la librería de Adafruit CP
#include <Adafruit_Circuit_Playground.h>

void setup() {
  //Inicia el Circuit Playground
  CircuitPlayground.begin();
  Serial.begin(9600);
}


void loop() {
  //
  int val = CircuitPlayground.lightSensor();
  int brillo = map(val, 15,970, 100, 0);
  CircuitPlayground.setBrightness(brillo);
  CircuitPlayground.setPixelColor(5,255,255,255);
  CircuitPlayground.setPixelColor(6,255,255,255);
  CircuitPlayground.setPixelColor(7,255,255,255);
  CircuitPlayground.setPixelColor(8,255,255,255);
  CircuitPlayground.setPixelColor(9,255,255,255);
 

}
