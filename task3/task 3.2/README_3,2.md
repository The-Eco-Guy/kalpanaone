# Servo Motor Sweep with Arduino Uno

## Overview

This Arduino project demonstrates how to control a positional servo motor using the built-in Servo library. The servo arm sweeps from 0° to 90° and back continuously.

## Functionality

* Uses the `Servo` library to control a positional servo motor.
* Sweeps the servo from 0° to 90°, one degree at a time, then back to 0°.
* Includes a 1-second delay at each end of the sweep.

## Code Behavior

* `servo.attach(9, 500, 2500);` attaches the servo to digital pin 9 with a pulse width range of 500–2500 microseconds.
* `for (pos = 0; pos <= degree; pos += 1)` gradually moves the servo to 90°.
* `for (pos = degree; pos >= 0; pos -= 1)` returns the servo to 0°.
* Each position step includes a `delay(10);` for smooth motion.
* `delay(1000);` adds a pause at the endpoints.

## Hardware Requirements

* **Arduino Uno R3**
* **1× Positional Micro Servo Motor**
* Jumper wires for connections:
  - Signal to pin 9 on Arduino
  - VCC to 5V
  - GND to GND
