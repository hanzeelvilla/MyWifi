/* TIMEOUT */

#include <MyWifi.h>
#include "config.h"

MyWifi wifi;
bool lastWifiStatus = false;

std::vector<WifiCredential> networks = {
  {SSID1, PSWD1},
  {SSID2, PSWD2},
  {SSID3, PSWD3}
};

void setup() {
  Serial.begin(115200);

  Serial.println("Setting Up Wifi...");
  wifi.begin(networks);

  unsigned long currentTime = millis();

  Serial.print("Connecting to Wifi...");
  while(!wifi.isConnected() && (millis() - currentTime < TIMEOUT_MS)) {
    Serial.print(".");
    delay(500);
  }

  if(wifi.isConnected()) {
    Serial.println("\n[INFO] Wifi connected to: " + wifi.getSSID());
    lastWifiStatus = true;
  }
  else {
    Serial.println("\n[ERROR] Wifi connection lost! Working in offline mode...");
    lastWifiStatus = false;
  }
} 

void loop() {
  bool currentWifiStatus = wifi.isConnected();

  if(currentWifiStatus != lastWifiStatus) {
    if(currentWifiStatus)
      Serial.println("[INFO] Wifi connected to: " + wifi.getSSID());
    else
      Serial.println("[ERROR] Wifi connection lost! Working in offline mode...");

    lastWifiStatus = currentWifiStatus;
  }

  if(currentWifiStatus) {
    // TASKS WITH WIFI
    Serial.println("I have wifi");
  }
  else {
    // TASKS WITHOUT WIFI
    Serial.println("I don't have wifi");
  }

  // TASKS THAT ALWAYS RUN
  Serial.println("I always run");

  delay(1000);
}
