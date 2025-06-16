
---

## 🔧 Task 2.1: Pushbutton-Controlled LED Brightness

📎 [Tinkercad Circuit](https://www.tinkercad.com/things/5gbgy2IDJEc-task-21)

---

### 🧩 Objective:

Control the brightness of an LED using a pushbutton. Each button press cycles the LED through **three brightness levels**. After the third press, it resets back to off.

---

### 🔌 Hardware Components:

| Component          | Description                                        |
| ------------------ | -------------------------------------------------- |
| Arduino UNO        | Microcontroller used to control logic and signals  |
| LED (Red)          | Output component used to show brightness levels    |
| Pushbutton         | Input component for user interaction               |
| Resistors          | 500Ω for LED, 1kΩ pull-down for pushbutton         |
| Breadboard + Wires | Used to connect components in a prototyped circuit |

---

### 📊 Circuit Diagram Summary:

* **LED** is connected to **pin D3**, which supports PWM (Pulse Width Modulation).
* The **pushbutton** is connected to **pin D2**.
* A **1kΩ pull-down resistor** ensures the pin reads LOW when the button is unpressed.
* A **500Ω resistor** limits current through the LED.




### ⚙️ Key Electronics Concepts:

#### 1. **PWM (Pulse Width Modulation)**

* Digital pins can't output "real" analog voltage.
* PWM simulates analog behavior by rapidly switching a pin ON and OFF with variable duty cycle.
* `analogWrite(pin, value)` sets this duty cycle:

  * `analogWrite(3, 255)` = always ON (100% brightness)
  * `analogWrite(3, 127)` = half ON/OFF time (medium brightness)
  * `analogWrite(3, 0)` = always OFF

#### 2. **Interrupts**

* Interrupts allow the Arduino to **immediately respond** to an event (like a button press) **outside of the `loop()`**.
* `attachInterrupt()` ties an external pin to a specific function (`ISR`) that runs **immediately** on a trigger (here: `RISING` edge).

#### 3. **Pull-down Resistors**

* When the button is **not pressed**, we want the pin to read a known logic level (LOW).
* A **1kΩ resistor to GND** ensures the pin is not floating and reads LOW.

Great! Let's go over **Task 2.2: Binary Counter** in full technical detail (excluding the logic breakdown, improvements, and learning outcomes per your instruction).

---



## 🔧 Task 2.2: 4-Bit Binary Counter with LEDs

📎 [Tinkercad Circuit](https://www.tinkercad.com/things/g7ooVARrz56-task-22?sharecode=lNNSFbTiKgCsCH2isdwtODxB-RER672QFA0mG23srOc)

---

### 🧩 Objective:

This project displays a **4-bit binary count (from 0 to 15)** using 4 LEDs connected to Arduino digital pins. Each second, the count increases by 1 and the LED pattern updates to reflect the binary value.

---

### 🔌 Hardware Components:

| Component          | Description                                              |
| ------------------ | -------------------------------------------------------- |
| Arduino UNO        | Microcontroller used to generate and output binary count |
| 4 x LEDs           | Indicators representing binary digits (bits 0–3)         |
| 4 x 1kΩ Resistors  | Current limiting resistors for each LED                  |
| Breadboard + Wires | For circuit assembly and connections                     |

---

### 📊 Circuit Diagram Summary:

* **PORTB (digital pins 8 to 13)** on the Arduino is used for LED output.
* Specifically, **Pins 8 to 11 (PB0–PB3)** are connected to:

  * D1 → PB0 → Pin 8
  * D2 → PB1 → Pin 9
  * D3 → PB2 → Pin 10
  * D4 → PB3 → Pin 11
* Each LED is wired in series with a 1kΩ resistor to **ground**, ensuring safe current flow.
* LEDs light up in binary patterns as the count progresses.


---

### ⚙️ Key Electronics and Programming Concepts:

#### 1. **Binary Number System**

* Binary uses base-2 (0 and 1).
* A **4-bit binary number** can represent values from `0000` (0) to `1111` (15).
* Each bit is represented by an LED:

  * LSB (Least Significant Bit) → PB0 (Pin 8)
  * MSB (Most Significant Bit) → PB3 (Pin 11)

#### 2. **PORT Manipulation**

* Arduino allows low-level control of digital pins using **PORT registers** (e.g., `PORTB`, `DDRB`).
* `DDRB = B00001111;` sets pins 8–11 as OUTPUT.
* `PORTB = i;` directly sends the binary value of `i` to these pins.

#### 3. **Loop Timing**

* `delay(1000);` introduces a 1-second pause between each count increment.
* Counting occurs from `0` to `15`, then loop resets.

---

### ✅ Summary:

* The circuit visually represents binary counting with LEDs.
* Uses low-level bit manipulation (`PORTB`, `DDRB`) for efficient and compact code.
* LEDs blink in a pattern that corresponds to binary values increasing each second.

---

✅ Task 2.3 — Two-Digit 7-Segment Counter with Interrupt Sync
🔧 Project Link:
Tinkercad Project

📌 Purpose:
The objective of this task is to count from 0 to 49 using two 7-segment displays, where the counting is triggered by interrupts. Once the count reaches 49, the system reverses and begins counting back to 0 — creating a full 0–49–0 loop. An external signal (from another Arduino or system) connected to pin D2 serves as the interrupt source.

There is no pushbutton in this task — the interrupt is externally triggered, likely by a second Arduino. This makes it an exercise in device-to-device communication using interrupts.

🔗 Key Components:
2 × Arduino Uno (one as main controller, one as interrupt generator)

2 × 7-segment common cathode displays

Current-limiting resistors (e.g., 100Ω, 1kΩ)

Connecting wire to D2 for external interrupt signal

⚙️ Concepts Used:
Interrupts (attachInterrupt): Used to increment the counter based on external signal input.

Two-digit number display logic: The number is split into tens and units digits, which are then displayed on two separate 7-segment displays.

Manual segment control: Each segment (a–g) is controlled via digitalWrite() to show the desired digit.

Count direction control: The program tracks whether it's counting up or down, switching directions at boundaries (0 and 49).

State persistence: The current number and direction are maintained across interrupts to ensure correct behavior.

