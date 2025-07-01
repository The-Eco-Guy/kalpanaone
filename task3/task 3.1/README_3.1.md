# Single 7-Segment Display Counter Using Adafruit Backpack

## Overview

This Arduino project demonstrates how to drive a 7-segment LED display module using the Adafruit LED Backpack library. The display shows a counter from `0` to `49`, updating every second.

## Functionality

* Utilizes the **Adafruit_7segment** and **Adafruit_GFX** libraries to interface with the display via I2C.
* Displays integers from `0` to `49`, one at a time, with a 1-second delay between each update.
* Communicates with the display over I2C using address `0x70`.

## Code Behavior

* `display.begin(0x70);` initializes the display module at I2C address `0x70`.
* The `for` loop in `loop()` function counts from `0` to `49`.
* `display.print(i);` updates the display with the current number.
* `display.writeDisplay();` refreshes the output to show the new value.
* `delay(1000);` introduces a 1-second pause between updates.

## Hardware Requirements

* **Arduino Uno R3**
* **1× Adafruit Red 0.56" 4-Digit 7-Segment Display (0x70 I2C Backpack)**
* Breadboard and jumper wires for I2C connection:
  - `SDA` to SDA pin on Arduino Uno
  - `SCL` to SCL pin on Arduino Uno
  - `VCC` to 5V
  - `GND` to GND
