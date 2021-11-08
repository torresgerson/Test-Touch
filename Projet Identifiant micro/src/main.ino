#include <Arduino.h>
#include "WiFi.h"

void setup(){
  Serial.begin(115200);
  WiFi.mode(WIFI_MODE_STA);
  Serial.print("ESP32 Chip ID = ");
  Serial.println(WiFi.macAddress());
}
 
void loop(){
  }
