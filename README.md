# Electronic Dice with ATmega328P

This repository documents a complete engineering design cycle for a multi-sided electronic dice. The project covers the entire development process, from initial problem definition and component research to detailed schematic design, PCB layout, software development, and 3D enclosure modeling. While a physical prototype was not assembled, all engineering stages for a production-ready device were completed.

The final design is a compact, key-fob-sized device featuring a rechargeable LiPo battery, USB-C charging, and a dual 7-segment display.

📄 **[Read the full project report (PDF)](Development%20Process.pdf)**

---

## ✨ Key Features

* **Multi-Sided Dice:** Supports d4, d6, d8, d10, d12, and d20 dice types, selectable via a tactile button.
* **Compact Design:** The final PCB measures just 38 x 48 mm.
* **Clear Display:** Utilizes two 7-segment displays with multiplexing to clearly show roll results.
* **Rechargeable:** Powered by a 150mAh LiPo battery with on-board USB charging via a TP4057 IC.
* **Power Management:** Includes an LM2731 step-up voltage regulator to provide a stable 5V supply to all components.

---

## ⚙️ The Engineering Process

This project followed a structured engineering lifecycle to ensure all objectives were met efficiently and reliably.

1. **Problem Definition:** Defined client requirements, project objectives, and created a Gantt chart for project planning.

2. **Research & Feasibility:** Analyzed existing products and sourced compatible, cost-effective components (ATmega328P, 7-segment displays, etc.). A full feasibility assessment (Technical, Economic, Operational) was conducted.

3. **Concept Design:**
   
    * **Software:** Developed the logic flow, including dice type selection, random number generation, and display multiplexing.
    * **Hardware:** Created a detailed schematic, outlining power management, microcontroller connections, and user interface components.

4. **PCB & Enclosure Design:**

    * Designed a compact, two-layer PCB using KiCad, optimized for size and signal integrity.
    * Modeled a custom 3D-printable enclosure in Autodesk Fusion 360 to house all components securely.

5. **Simulation & Validation:** The core logic was tested in a simulated breadboard environment to validate the software and hardware interaction before finalization.

---

# 🚀 Core Competencies

* **Embedded Systems Programming:** C++ development for the ATmega328P microcontroller using the Arduino IDE.
* **PCB Design & Layout:** Schematic capture and two-layer PCB design using KiCad.
* **Hardware Design:** Component selection, power management design (charging, voltage regulation), and circuit simulation.
* **3D Modeling:** Designing a functional and ergonomic enclosure for 3D printing using Autodesk Fusion 360.
* **Project Management:** Following a structured engineering design cycle from concept to a production-ready design.

---

# 🔧 Technical Specifications

* **Microcontroller:** ATmega328P-AU
* **Display:** 2x HDSP-513A Common Cathode 7-Segment Displays
* **Power:** 3.7V 150mAh LiPo Battery
* **Charging:** TP4057 Charging IC with Micro-USB input
* **Voltage Regulator:** LM2731 Step-Up Converter (outputting 5V)
* **User Input:** 2x Tactile Switches (for dice type and roll)

---

## 🗂️ Repository Structure

- `/Code`: Contains the Arduino `.ino` sketch for the microcontroller.
- `/Hardware`: Includes the source files for the PCB layout (`/PCB`)and the 3D model for the enclosure (`/3D_Model`).
- `/Images`: Contains visual assets for this README.
- `Development_Process.pdf`: The detailed logbook documenting the entire project.
