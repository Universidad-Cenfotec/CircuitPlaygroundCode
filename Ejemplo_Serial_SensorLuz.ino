//Universidad Cenfotec
//Curso Introducción a Tecnologías de Información
// Tomás de Camino Beck

//Carga la librería de Adafruit CP
#include <Adafruit_CircuitPlayground.h>

void setup() {
  //Inicia el Circuit Playground
  CircuitPlayground.begin();
  Serial.begin(9600);
}


void loop() {
  //
  int val = CircuitPlayground.lightSensor();
  Serial.println(val);
  delay(200);

}
