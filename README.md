# LED Control with Button using OneButton Library

## Description
This project controls an external LED connected to an ESP32 via GPIO pin 18. The button connected to GPIO pin 19 is used to control the LED with the following functionalities:
- **Single click**: Toggles the LED ON/OFF.
- **Double click**: Starts blinking the LED with a 200ms interval.

## Features
- **Single Click**: The LED will toggle between ON and OFF states.
- **Double Click**: The LED will start blinking with a 200ms interval.
  
## Requirements
- **ESP32 Dev Module**
- **PlatformIO with Arduino Framework**
- **External LED** connected to GPIO 18 with a resistor.
- **Button** connected to GPIO 19.

## Setup
1. Wire the LED to GPIO 18 with a current-limiting resistor.
2. Connect the button to GPIO 19 and GND.
3. Flash the ESP32 with this code.

## Installation
Clone the repository and open it in PlatformIO.
