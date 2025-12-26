#include "MyWifi.h"

void MyWifi::begin(std::vector<WifiCredential> wifiList) {
  for(const WifiCredential& wifi : wifiList) {
    wifiMulti.addAP(wifi.ssid.c_str(), wifi.pswd.c_str());
  }
}

bool MyWifi::isConnected() {
  return wifiMulti.run() == WL_CONNECTED;
}

void MyWifi::reconnect() {
  wifiMulti.run();
}

String MyWifi::getSSID() {
  return isConnected() ? WiFi.SSID() : "Disconnected";
}