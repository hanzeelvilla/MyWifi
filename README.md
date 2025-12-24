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

## Configuration

Before compiling, you need to set up your network credentials. This library uses a separate header file to keep your private information safe.

1. Locate the file named `config.template.h` in the library or project folder.
2. Create a copy of this file into yout project and rename it to `config.h`.
3. Open `config.h` and fill in your WiFi SSIDs, passwords, and the desired connection timeout

> [!NOTE]
> If you are using Git, make sure `config.h` is added to your `.gitignore` to prevent your credentials from being uploaded to GitHub