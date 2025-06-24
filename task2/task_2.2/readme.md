

# 4-Bit Binary Counter Using Arduino (PORTB)

## Overview

This Arduino sketch implements a 4-bit binary counter using the lower 4 bits of **PORTB** (pins 8 to 11 on Arduino UNO R3). It outputs binary values from `0000` to `1111` (0 to 15 in decimal), updating every second.

## Functionality

* Configures the lower 4 bits of `PORTB` (PB0–PB3) as outputs using `DDRB`.
* Increments a counter from 0 to 15.
* Sends the binary representation of the counter value to `PORTB`.
* Updates the output every 1000 milliseconds (1 second).

## Code Behavior

* `DDRB = B00001111;` sets pins PB0 to PB3 (digital pins 8–11) as outputs.
* `PORTB = i;` writes the current counter value to the output pins.
* `delay(1000);` creates a 1-second interval between updates.

## Hardware Requirements

* Arduino board (e.g., Uno, Nano)
* 4 LEDs
* 4 resistors (220Ω recommended)
* Breadboard and jumper wires
