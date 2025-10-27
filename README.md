Smart Street Light - Arduino IoT Project 💡

Automated Traffic Luminance System

Status

Tech Stack

Type

✅ Operational

Arduino UNO / C++

IoT / Embedded Systems

1. Project Overview

This project implements a decentralized Energy Conservation Protocol for street lighting. The system uses two key sensors to determine if and when illumination is needed:

A Light Dependent Resistor (LDR) to verify low-light (nighttime) conditions.

An Ultrasonic Sensor (HC-SR04) to detect the presence of vehicles or pedestrians.

The light is only activated when both conditions are met, leading to significant power savings compared to systems that simply turn on at dusk.

2. Operational Features 🧠

Symbol

Feature

Description

🌙

Environmental Lock

Illumination only activates post-dusk (controlled by the LDR sensor threshold).

🚗

Proximity Sensing

Vehicle detection and rangefinding via the HC-SR04 sensor.

🟢

State Transition

Light (LED) is turned ON only when a target is detected within the set range.

⏱️

Auto-Standby

Light is automatically switched OFF after the vehicle/target exits the detection zone, maintaining optimal efficiency.

📈

Scalable Design

Logic is designed to be array-ready for mass deployment across multiple street light modules.

3. Hardware Manifest 🧰

The required components are standard and easily sourced:

Arduino UNO (Microcontroller Core)

LDR Module (Ambient Light Sensor)

Ultrasonic Sensor (HC-SR04) (Rangefinder)

LED + 220Ω Resistor (Luminance Output)

Breadboard and Jumper Wires (Interconnects)

4. I/O Pinout Configuration ⚙️

Component ID

Arduino Pin

Function

LDR_OUT

A0

Analog Input (Reads light intensity)

TRIG_PULSE

D9

Digital Output (Sends ultrasonic trigger pulse)

ECHO_REC

D10

Digital Input (Receives ultrasonic echo pulse)

LED_OUTPUT

D8

Digital Output (Controls LED state)

POWER_BUS

5V

Power Supply

GROUND_REF

GND

Ground Reference

5. Execution Logic Flow 🧩

The system operates based on a simple, dual-condition AND gate logic:

// LDR_READ determines if it is night
if (LDR_READ < NIGHT_THRESHOLD) {
    // NIGHT condition met. Initiate Proximity Check.
    
    // ULTRASONIC_DISTANCE is measured
    if (ULTRASONIC_DISTANCE <= 30) {
        // Vehicle detected within 30 CM range
        ACTIVATE_LED(D8, HIGH);
    } else {
        // No vehicle detected or vehicle has passed
        ACTIVATE_LED(D8, LOW);
    }
} else {
    // DAY condition met. Maintain standby mode.
    ACTIVATE_LED(D8, LOW);
}


6. Code & Schematics 💻

Main Code: The full operational logic is contained within Smart_Street_Light.ino.

Diagnostic Code: The sensor calibration and test script is available as Ultrasonic_Test.ino.

Circuit Topology Diagram

The full circuit diagram will be provided here: circuit_diagram.png

7. Author Profile 🧑‍💻

Field

Detail

ENTITY_ID

Amey Jadhav

CREDENTIALS

B.Tech CSE

CLASSIFICATION

IoT & Embedded Systems Architect
