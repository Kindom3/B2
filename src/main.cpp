#include <Arduino.h>
const int ledPin = 9;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}
 
void loop() {
  int reading  = analogRead(A0);
  int brightness = reading / 4;
  analogWrite(ledPin, brightness);
  Serial.println(brightness);
}