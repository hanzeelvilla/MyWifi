#ifndef MY_WIFI_H

#define MY_WIFI_H

#include <WiFi.h>
#include <WiFiMulti.h>
#include <vector>

struct WifiCredential {
  String ssid;
  String pswd;
};

class MyWifi {  
  public:
    void begin(std::vector<WifiCredential> wifiList);
    String ssid();

  private:
    WiFiMulti wifiMulti;
};

#endif