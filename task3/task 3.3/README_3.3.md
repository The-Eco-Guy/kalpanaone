# Stepper Motor Directional Rotation with Arduino Uno

## Overview

This Arduino project demonstrates how to control a stepper motor using the built-in Stepper library. The motor rotates in one direction for a specified number of revolutions, then reverses back to its original position. Speed, direction, and number of rotations can be easily customized.

## Functionality

* Controls a stepper motor using four digital pins.
* Allows configurable direction, number of rotations, and rotation speed.
* Rotates the motor forward and backward with a pause in between.

## Code Behavior

* `Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);` initializes the motor with 200 steps per revolution using pins 8–11.
* `myStepper.setSpeed(60);` sets the rotation speed to 60 RPM (user-configurable).
* `myStepper.step(stepsPerRevolution * direction * numberofrotations);` rotates the motor by a set number of revolutions in the given direction.
* After a 1-second delay, the motor rotates in the reverse direction using the same step count.

## Hardware Requirements

* **Arduino Uno R3**
* **1× Stepper Motor (200 steps/rev or compatible)**
* Jumper wires for motor connections to digital pins 8, 9, 10, and 11
* External power supply (recommended, depending on stepper motor specs)
