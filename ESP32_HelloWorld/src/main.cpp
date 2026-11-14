#include <Arduino.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
Serial.begin(115200);
Serial.println("Hello, world! FROM THE SETUP");
}

void loop() {
  delay(700);
  digitalWrite(LED_BUILTIN, HIGH);
Serial.println("Hello, world! FROM THE LOOP");
  delay(700);
  digitalWrite(LED_BUILTIN, LOW);
}

