# DIP Switch Based Input & Output Control System

A hardware-based control system that demonstrates **manual configuration of electronic components** using **DIP switches** and an **Arduino microcontroller**.  
This project highlights how hardware-level binary inputs can control multiple output devices without modifying the program logic.

---

## 📌 Project Overview

This project uses **2-way and 4-way DIP switches** as input devices to control:

- LED (visual output)
- Servo motor (mechanical output)
- Buzzer (audio output)

The Arduino continuously monitors the switch positions and activates outputs based on predefined logic, enabling **manual hardware-based control**.

---

## 🖼️ Project Images

<!-- Add project images here -->
<!-- IMAGE 1 -->
![Hardware Setup](./images/image1.jpeg)

<!-- IMAGE 2 -->
![Breadboard Connections](./images/image2.jpeg)

---

## 🔁 System Architecture

### Input
- 2-way DIP switch  
- 4-way DIP switch  
- Each switch provides **binary input**  
  - ON = 1 (HIGH)  
  - OFF = 0 (LOW)

### Processing
- Arduino reads the binary states of all switches
- Logic is applied to interpret switch combinations

### Output
- LED turns ON/OFF
- Servo motor rotates to predefined angles
- Buzzer generates sound

Different switch combinations trigger different outputs **without reprogramming**.

---

## 🧰 Components Used

- Arduino board  
- 2-Way DIP switch  
- 4-Way DIP switch  
- Breadboard  
- Jumper wires  
- LED  
- Servo motor  
- Flat disc buzzer  
- Resistors (for LED and input stability)

---

## 🔌 Circuit Connections Overview

### DIP Switch Connections
- One side of each DIP switch is connected to **5V**
- Other side is connected to **Arduino digital input pins**
- Pull-up / pull-down resistors are used to avoid floating inputs

### Servo Motor
- Signal pin → Arduino PWM pin  
- VCC → 5V  
- GND → Ground  

Servo position changes based on DIP switch combinations.

### LED
- Connected to Arduino digital output pin
- Current-limiting resistor used for protection

### Buzzer
- Connected to Arduino digital output pin
- Produces sound when activated

---

## ⚙️ How the System Works

1. User manually sets the DIP switches
2. Arduino continuously reads switch states
3. Binary combinations are processed using predefined logic
4. Outputs are activated accordingly:
   - LED lights up
   - Servo rotates
   - Buzzer sounds
5. System responds in real time to switch changes

---

## 🛠️ Installation & Setup

### Hardware Setup
1. Place the Arduino on a breadboard
2. Connect DIP switches to Arduino input pins
3. Add pull-up or pull-down resistors to stabilize inputs
4. Connect LED with a current-limiting resistor
5. Connect servo motor and buzzer to appropriate pins
6. Ensure common **ground connection** for all components

### Software Setup
1. Install **Arduino IDE**
2. Connect Arduino to your system via USB
3. Open the provided Arduino sketch from the repository
4. Select the correct board and port
5. Upload the code to the Arduino

Once uploaded, the system is ready to operate.
## ✅ Conclusion

This project successfully demonstrates:

- Hardware-based control using DIP switches
- Binary input interpretation
- Digital I/O interfacing with Arduino
- Practical use of pull-up and pull-down resistors

The modular design makes it suitable for **embedded systems**, **digital electronics**, and **IoT learning applications**.

---

## 👨‍🎓 Authors

- **Dharmendra N K R**  
- **Eshwar M**

**Course:** Internet of Things  
**Institution:** Amrita Vishwa Vidyapeetham  
**Program:** M.Sc Integrated Data Science
