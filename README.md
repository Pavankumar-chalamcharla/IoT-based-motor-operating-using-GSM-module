# GSM-Based Motor Control System using Arduino and SIM900A

## Project Overview
This project enables remote control of a motor (such as a borewell pump motor) via GSM network using an Arduino Uno and SIM900A GSM module. The motor can be turned ON or OFF by sending SMS commands or making a phone call to the SIM900A module, which controls a relay connected to the motor.

This system is ideal for farmers who want to control irrigation pumps remotely without needing physical presence.

---

## Features
- Turn motor ON/OFF by sending SMS commands
- Control motor by calling the GSM number (call automatically toggles the motor)
- Easy to configure with Arduino Uno and SIM900A module
- Uses relay module to switch the motor
- Provides SMS feedback on command execution (optional)

---

## Components Required
- Arduino Uno
- SIM900A GSM Module
- Relay Module (5V) to control the motor
- Motor or a motor simulator (like a buzzer or lamp)
- Power supply for Arduino and Motor
- Connecting wires
- SIM card with active GSM service

---

## Circuit Diagram
*Insert your circuit diagram or schematic here*

- Connect SIM900A TX to Arduino RX (Pin 7)
- Connect SIM900A RX to Arduino TX (Pin 8)
- Relay IN connected to Arduino digital pin (e.g., Pin 9)
- Motor connected to relay output

---

## Installation & Setup
1. Insert the SIM card into SIM900A module.
2. Connect the hardware as per the circuit diagram.
3. Upload the Arduino code (`gsm_motor_control.ino`) to the Arduino Uno.
4. Power up the Arduino and SIM900A module.
5. Use your phone to send SMS commands or call the SIM900A number.

---

## SMS Commands
- **ON** — Turns the motor ON
- **OFF** — Turns the motor OFF

Example SMS to the SIM900A number:  

