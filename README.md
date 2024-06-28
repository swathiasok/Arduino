# Arduino
Automatic Traffic Control System using Arduino

This repository contains the final version of the code for controlling traffic lights using Arduino and wireless communication. The project utilizes LEDs to simulate traffic lights and includes code for both the transmitter and receiver modules.

## Repository Structure

- **final**: Contains the final version of the code.
- **libraries**: Includes necessary libraries for the project.
- **light**: Code related to controlling the traffic light LEDs.
- **receiver**: Code for the receiver module using the Amplitude Shift Keying (ASK) Library.
- **receiver1**: Code for the receiver module using the VirtualWire Library.
- **relay**: Code for controlling relays with the Arduino.
- **transmitter**: Code for the transmitter module using the Amplitude Shift Keying (ASK) Library..
- **transmitter1**: Code for the transmitter module using the VirtualWire Library.

## Components

- **Arduino boards** (e.g., Arduino Uno)
- **LEDs** (Red, Yellow, Green)
- **433MHz RF modules** (Transmitter and Receiver)
- **Breadboard and jumper wires**
- **Power supply** for Arduino

## Installation

1. **Clone the Repository**:
   ```bash
   git clone [https://github.com/swathiasok/Arduino](https://github.com/swathiasok/Arduino)
   cd Arduino/final
   ```

2. **Install Necessary Libraries**:
   - Install the VirtualWire Library:
     - Download the VirtualWire Library from the [VirtualWire GitHub](https://github.com/PaulStoffregen/VirtualWire).
   - Install the RadioHead ASK Library and the SPI Library:
     - Download the RadioHead ASK Library from the RadioHead GitHub.
   - Add the library to your Arduino IDE (Sketch -> Include Library -> Add .ZIP Library).

3. **Open the Code**:
   - Open the Arduino IDE.
   - Open the `transmitter.ino` and `receiver.ino` files from the directory.

4. **Upload the Code**:
   - Connect your Arduino board to your computer.
   - Select the correct board and port in the Arduino IDE.
   - Upload `transmitter.ino` to the Arduino connected to the transmitter module.
   - Upload `receiver.ino` to the Arduino connected to the receiver module.

## Usage

1. **Set up the Hardware**:
   - Connect the LEDs to the specified pins on the Arduino as described in the code.
   - Connect the RF modules (transmitter and receiver) to the Arduinos as per the pin configuration in the code.

2. **Power the System**:
   - Ensure all components have a suitable power supply.
   - Verify connections before powering up to avoid any short circuits or damage.

3. **Run the System**:
   - After uploading the code, the transmitter will send control signals.
   - The receiver will receive these signals and control the traffic lights (LEDs) accordingly.

This README file provides an overview of the project and instructions for setting up and using the code in this repository.
