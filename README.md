# Drip Irrigation Using Helianthus Panel

## Overview

This project demonstrates an eco-friendly **drip irrigation system** powered by a **solar panel tracker**. By combining solar energy with efficient irrigation, it offers a sustainable solution for watering plants. The system uses an **Arduino** to control a **servo motor**, which adjusts the position of the **solar panel** based on light detected by two **Light Dependent Resistors (LDRs)**. This ensures the solar panel stays oriented toward the sun for optimal energy capture throughout the day.

The solar panel powers a water pump, which then delivers water to plants through a **drip irrigation system**, efficiently providing water without waste. The system operates autonomously, making it ideal for agricultural fields, gardens, or remote areas with no access to conventional power.

By harnessing solar energy, the project reduces reliance on traditional energy sources, lowers operational costs, and promotes water conservation, offering a simple yet effective solution for sustainable farming and landscaping.

---

## Project Description

The **Solar-Powered Drip Irrigation System** integrates a **solar panel tracker** with an efficient drip irrigation setup. The Arduino-controlled servo motor adjusts the solar panel to track sunlight using **LDRs**, maximizing energy capture. The energy powers a water pump, which delivers water to plants, optimizing water usage and promoting sustainability.

---

## Components

- **Solar Panel**: Captures sunlight and generates power for the system.
- **Arduino Uno**: Controls the servo motor and monitors the LDR readings.
- **SG90 Servo Motor**: Adjusts the solar panel’s position to track the sun.
- **LDR (Light Dependent Resistor)**: Detects light intensity to help move the solar panel.
- **Water Pump**: Moves water from the tank to the plants.
- **Plastic Pipes**: Delivers water to the plants.
- **Water Tank**: Holds water for irrigation.

---

## Installation Instructions

  Connect the Solar Panel: Attach the solar panel to the system and ensure it's generating enough power to run the components.
    Wiring:
        Connect the LDRs to the Arduino analog pins.
        Attach the servo motor to a PWM-capable pin on the Arduino.
        Connect the water pump to the solar panel or battery, ensuring it gets power when the solar panel generates energy.
    Upload Code: Upload the provided Arduino code to the Arduino board using the Arduino IDE.
    Setup the Drip Irrigation: Install the plastic pipes and ensure the water pump is connected to the tank and irrigation lines.

## How It Works

  - The Arduino continuously monitors the two LDRs to determine the relative light intensity from both sides of the solar panel.
  - If one side of the panel is getting more light, the servo motor adjusts the panel’s position to follow the light, ensuring the solar panel is always facing the sun.
  - The solar energy generated by the panel powers the water pump, which distributes water to the plants using the drip irrigation system.
  - The system operates autonomously, requiring no additional energy sources besides sunlight.

---

## Uses and Benefits

  - **Agricultural Irrigation**: Efficiently waters crops with renewable energy, reducing water and power consumption.
  - **Landscaping**: Provides an eco-friendly solution for gardens and lawns.
  - **Remote Areas**: Ideal for off-grid locations without electricity access.
  - **Water Conservation**: Delivers water precisely to the plants, preventing waste and promoting sustainable usage.
  - **Cost Savings**: Lowers long-term operational costs by eliminating the need for electricity or fuel.
---
