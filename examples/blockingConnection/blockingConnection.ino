/* BLOCKING */

#include <MyWifi.h>
#include "config.h"

MyWifi wifi;

std::vector<WifiCredential> networks = {
  {SSID1, PSWD1},
  {SSID2, PSWD2},
  {SSID3, PSWD3}
};

void setup() {
  Serial.begin(115200);

  Serial.println("Setting Up Wifi...");
  wifi.begin(networks);

  Serial.print("Connecting to Wifi...");
  while(!wifi.isConnected()) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected to: " + wifi.getSSID());
} 

void loop() {
  if (!wifi.isConnected()) {
    Serial.print("[ERROR] Wifi connection lost! Reconnecting...");
    
    while (!wifi.isConnected()) {
      delay(500);
      Serial.print(".");
    }
    
    Serial.println("[SUCCESS] Wifi reconnected to: " + wifi.getSSID());
  }

  // MAIN TASKS
}
