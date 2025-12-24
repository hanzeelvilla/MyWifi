#include "MyWifi.h"
#include "config.h"

MyWifi wifi;

void setup() {
  Serial.begin(115200);

  Serial.println("Setting Up Wifi...");
  wifi.begin({
    {SSID1, PSWD1},
    {SSID2, PSWD2},
    {SSID3, PSWD3}
  });
} 

void loop() {
  
}
