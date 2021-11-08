// ESP32 Touch Test
// Just test touch pin - Touch0 is T0 which is on GPIO 4.
#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(touchRead(T0));  // get value using T0
  delay(1000);
}