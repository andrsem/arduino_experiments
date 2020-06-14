#include <Arduino.h>

const int pinLed = 10;
const int pinPot = A0;
int val = 0;
int brightness = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
}

void loop() {
  val = analogRead(pinPot);

  Serial.println(val);
  delay(50);

  brightness = map(val, 0, 1023, 0, 255);

  analogWrite(pinLed, brightness);
}