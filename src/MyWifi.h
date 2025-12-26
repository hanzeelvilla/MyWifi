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
    bool isConnected();
    void reconnect();
    String getSSID();

  private:
    WiFiMulti wifiMulti;
};

#endif