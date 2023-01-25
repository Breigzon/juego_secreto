#include <Arduino.h>

void setup() {
  serial.begin(9600);
}

void loop() {
  serial.print("hola a todos");
  delay(1000);



}