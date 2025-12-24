#include "MyWifi.h"

void MyWifi::begin(std::vector<WifiCredential> wifiList) {
  for(const WifiCredential& wifi : wifiList) {
    wifiMulti.addAP(wifi.ssid.c_str(), wifi.pswd.c_str());
  }
}