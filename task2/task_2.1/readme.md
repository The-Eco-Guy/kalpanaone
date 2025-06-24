

# PWM LED Brightness Control Using Arduino

## Overview

This Arduino sketch gradually changes the brightness of an LED connected to **digital pin 3** using Pulse Width Modulation (PWM). The brightness level is updated every 2 seconds, cycling through 3 distinct brightness levels repeatedly.

## Functionality

* Uses `analogWrite()` to set different brightness levels of the LED.
* Changes brightness every 2000 milliseconds (2 seconds).
* Cycles through 3 brightness levels before repeating:

  * Full brightness: `analogWrite(3, 255/1)`
  * Medium brightness: `analogWrite(3, 255/2)`
  * Low brightness: `analogWrite(3, 255/3)`
* After the third level, the brightness cycle restarts.

## Code Behavior

* `millis()` is used to handle non-blocking time tracking.
* `i` is used to control the brightness state and reset after 3 states.
* `prevmillis` is used to store the timestamp of the last brightness change.

## Hardware Requirements

* Arduino board (e.g., Uno, Nano)
* LED
* Resistor (220Ω recommended)
* Breadboard and jumper wires
