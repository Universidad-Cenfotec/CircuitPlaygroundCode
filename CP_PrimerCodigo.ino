//Universidad Cenfotec
//Curso Introducción a Tecnologías de Información
//https://youtu.be/0VlrpHyZfbg
// Tomás de Camino Beck

//Carga la librería de Adafruit CP
#include <Adafruit_CircuitPlayground.h>

void setup() {
  //Inicia el Circuit Playground
  CircuitPlayground.begin();
}


void loop() {
  //Prende los primeros 5 LEDS con diferentes colores
  CircuitPlayground.setPixelColor(0,255,0,0);
  CircuitPlayground.setPixelColor(1,50,100,240);
  CircuitPlayground.setPixelColor(2,255,120,0);
  CircuitPlayground.setPixelColor(3,255,0,0);
  CircuitPlayground.setPixelColor(4,255,0,60);

}
