#include "MyWifi.h"
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
  Serial.println(wifi.isConnected());
  Serial.println(wifi.getSSID());
} 

void loop() {

}
