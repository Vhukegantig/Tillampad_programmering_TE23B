# Real-Time Clock Display with DS3231 and Arduino

This project is an Arduino-based Real-Time Clock (RTC) display using the DS3231 RTC module and the `RTClib` library. The code retrieves and displays the current time in the Serial Monitor.

## Features

- **Accurate Real-Time Clock**: Uses the DS3231 module to maintain precise time, even when the Arduino is off.
- **Automatic Time Adjustment**: Sets the initial time to the upload time of the code, ensuring accurate time on startup.
- **Simple Serial Display**: Outputs the time in "HH:MM:SS" format via the Serial Monitor.

## Components

- **Arduino Board** (e.g., Uno, Nano)
- **DS3231 RTC Module**
- **Wiring**: Connect SDA and SCL pins from the DS3231 module to the corresponding SDA and SCL pins on the Arduino.

## Libraries Required

- **[RTClib](https://github.com/adafruit/RTClib)**: Handles the communication with the DS3231 module.

### Installation

1. Install the `RTClib` library via the Arduino Library Manager:
   - Go to **Sketch > Include Library > Manage Libraries...**
   - Search for "RTClib" and install it.
2. Upload the code to your Arduino.

## Code Explanation

The code initializes the DS3231 RTC module, sets the initial time based on the upload date and time, and continuously displays the current time in the Serial Monitor.