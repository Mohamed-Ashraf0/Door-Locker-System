# Door Locker System

## 📌 Overview

The **Door Locker System** is a secure embedded application designed to control access using a password-based authentication system. Powered by the **ATmega32** microcontroller, the system handles user interaction, secure access control, and error detection through a combination of keypad inputs, EEPROM storage, and visual/auditory feedback components.

## 🚀 Features

- 🔐 **Password Authentication**: Users enter a preset password to unlock the door.
- 🧠 **EEPROM Storage**: Secure password is saved in external EEPROM to retain data during power loss.
- 🖥️ **LCD Feedback**: 16x2 LCD displays system status, prompts, and feedback to the user.
- 🔄 **Motorized Lock**: DC motor simulates the door locking/unlocking mechanism.
- 🚨 **Security Alert**: After three failed attempts, a buzzer sounds for one minute to indicate a security breach.
- 🧰 **Modular Code Structure**: Code is split into well-organized modules for keypad, LCD, DC motor, EEPROM, and the control logic.

## 🔧 Components Required

| Component         | Description                       |
|------------------|-----------------------------------|
| ATmega32         | Main microcontroller              |
| 4x4 Keypad       | User input                        |
| 16x2 LCD         | Display feedback                  |
| DC Motor         | Lock mechanism                    |
| External EEPROM  | Store password data               |
| Buzzer           | Alert system                      |
| Power Supply     | 5V DC                             |
| Resistors, Breadboard, Wires | For circuit assembly |

## 🛠️ Installation & Setup

### 🔌 Hardware Setup

1. **Connect the 4x4 keypad** to PORTC for password input.
2. **Attach the 16x2 LCD** to display prompts and status messages.
3. **DC Motor** connects through motor driver to simulate locking/unlocking.
4. **External EEPROM** interfaces over I2C (TWI) for saving the password.
5. **Buzzer** connects to a GPIO pin for signaling failed attempts.

### 💻 Software Setup

- Code is written in **C for AVR** and compiled using **Atmel Studio**.
- No additional libraries needed—fully built on low-level register control.

## 📁 Project Structure

- `Application/` : Contains the main application logic that manages the door lock system.
- `ECUAL/` : External Component Abstraction Layer – includes drivers for:
  - `DC_Motor/` – Controls the locking/unlocking motor.
  - `Keypad/` – Handles user input via a 4x4 keypad.
  - `LCD/` – Manages the 16x2 LCD display for feedback.
- `HAL/` : Hardware Abstraction Layer – includes:
  - `EEPROM/` – Driver for external EEPROM to store/retrieve passwords.
  - `Timer/` – Timer configurations for delays and alert timing.
- `MCAL/` : Microcontroller Abstraction Layer – includes low-level drivers for:
  - `DIO/` – Digital I/O pin control.
  - `TWI/` – I2C communication protocol (used for EEPROM).
  - `UART/` – Serial communication interface (optional/debugging).
- `main.c` : Entry point of the system. Initializes modules and starts the main control loop.
- `README.md` : Project documentation and usage instructions.
- `.gitignore` : Specifies files and directories ignored by Git (e.g., build outputs, temp files).
## 🧪 Usage

1. **Power on** the system.
2. Enter the password via the keypad.
3. If the password is correct, the door unlocks (DC motor rotates).
4. If incorrect, retry up to 3 times.
5. After 3 wrong attempts, the buzzer will sound for 60 seconds.

## 🛡️ Security Behavior

- The password is stored in EEPROM.
- After every correct entry, the system resets attempt count.
- EEPROM ensures persistence of the password even if power is lost.

## 📎 Repository

🔗 [GitHub Repository](https://github.com/Mohamed-Ashraf0/Door-Locker-System)

---

> Developed as part of an embedded systems project using low-level microcontroller programming with AVR ATmega32.

