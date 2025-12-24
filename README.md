# MyWifi

This library allows your ESP32 to manage multiple WiFi credentials and automatically switch to the strongest available network without blocking your main code

## Features

- Multi-SSID support using WiFiMulti.
- Non-blocking connection management.
- State-change detection (prevents Serial spam).
- Automatic reconnection.

## Dependencies

- [WiFi.h](https://github.com/arduino-libraries/WiFi)

## Installation

1. **Download**: Click the green **Code** button on GitHub and select **Download ZIP**
2. **Unzip**: Extract the contents of the `.zip` file to your computer
3. **Rename**: The unzipped folder will likely be named `MyWifi-main` or `MyWifi-v1.0.0`. Rename it to exactly `MyWifi`
4. Move the renamed `MyWifi` folder into your **Arduino libraries** directory:
   - **Windows:** `Documents\Arduino\libraries\`
   - **macOS:** `~/Documents/Arduino/libraries/`
5. Restart your Arduino IDE so it can index the new library

