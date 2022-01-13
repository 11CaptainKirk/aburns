#include <Arduino.h>

const int buttonPin = 6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(buttonPin) == LOW) {
    Serial.println("Button pressed");
  }
  if (digitalRead(buttonPin) == HIGH) {
    Serial.println("Button released");
  }
}