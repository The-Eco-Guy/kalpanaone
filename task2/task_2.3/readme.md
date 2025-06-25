
# Two-Digit 7-Segment Display Counter Using Shift Registers

## Overview

This Arduino sketch drives a two-digit 7-segment display using shift registers. It displays numbers from `00` to `49`, updating every 500 milliseconds.

## Functionality

* Uses three Arduino pins to control a shift register:

  * `datapin` (pin 11)
  * `clockpin` (pin 12)
  * `latchpin` (pin 8)
* A `digits[]` array stores the segment bitmaps for digits `0` to `9`.
* Inner loop iterates over the second digit (`0–9`), while the outer loop sets the first digit (`0–4`).
* Displays each number for 500 ms using `shiftOut()`.

## Code Behavior

* `shiftOut(datapin, clockpin, MSBFIRST, digits[j]);` sends the second digit (units).
* `shiftOut(datapin, clockpin, MSBFIRST, digits[i]);` sends the first digit (tens).
* `latchpin` is toggled LOW-HIGH to update the output of the shift register.

## Hardware Requirements

* Arduino board
* 2-digit 7-segment display
* 74HC595 shift register(s)
* Resistors for current limiting
* Breadboard and jumper wires
