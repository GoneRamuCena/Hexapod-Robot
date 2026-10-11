# Hexapod Robot 🤖

## Project Overview
The Hexapod Robot is a robotics project designed to control a robot using an Arduino Mega and an HC-05 Bluetooth module. The project also explores MIT Scratch software for block-based programming and robot control.

## Project Aim
- To control a Hexapod Robot using a mobile phone through Bluetooth.
- To become familiar with MIT Scratch software.

## Hardware Requirements
- Arduino Mega
- HC-05 Bluetooth Module
- Servo Motors
- Jumper Wires
- Arduino USB Cable
- Battery Sources
- Screws and Nuts
- Clamps
- Hexapod Robot Structure

## Software Requirements
- Arduino IDE
- Mobile UI Application by Skyfi Labs
- MIT Scratch Software
- Arduino Code for Hexapod Robot
- Arduino Code for Bluetooth-Controlled Hexapod Robot
- Scratch Software Code
- CAD File

## Circuit Connections

### Servo Motors to Arduino Mega

| Servo Motor | Arduino Mega Pin |
|---|---|
| Front Servo | Pin 4 |
| Lift Servo | Pin 7 |
| Rear Servo | Pin 8 |

### HC-05 Bluetooth Module to Arduino Mega

| HC-05 Pin | Arduino Mega Pin |
|---|---|
| TX | RX (19) |
| RX | TX (18) |
| VCC | 5V |
| GND | GND |

### Servo Power Supply
- Servo VCC → Battery Positive (+)
- Servo GND → Battery Negative (−)

**Note:** Use an appropriate external power supply for the servo motors and verify the voltage requirements before connecting the circuit.

## Working Procedure
1. Assemble the servo motors and robot parts according to the hexapod structure.
2. Connect the servo motors to the Arduino Mega.
3. Connect the HC-05 Bluetooth module to the Arduino Mega.
4. Connect the servo motors to the battery power supply.
5. Open the Arduino IDE.
6. Upload the Hexapod Robot Arduino code.
7. Enable Bluetooth on your mobile phone.
8. Open the compatible mobile UI application.
9. Connect to the HC-05 Bluetooth module.
10. Control the robot using the mobile application.
11. Alternatively, use the MIT Scratch project to explore block-based robot control.

## Working Principle
The Arduino Mega controls the servo motors according to the programmed instructions. The HC-05 Bluetooth module enables wireless communication between the robot and a mobile phone. Commands sent through the mobile UI allow the user to control the robot's movements.

The project also explores MIT Scratch as a block-based programming approach.

## Result
Successfully developed a Hexapod Robot using an Arduino Mega and a Bluetooth module, demonstrating wireless robot control and basic robotics programming.

**Top view of Hexapod Robot :**

![Hexapod-Robot](https://github.com/GoneRamuCena/Hexapod-Robot/blob/15d4545957cb854acde8e3593ec0d8a89a8e63f2/Project%20Details/Hexapod%20Robot%20top%20view.png)

**Front View of Hexapod Robot :**:

![Hexapod-Robot](https://github.com/GoneRamuCena/Hexapod-Robot/blob/9fdbec5163e7b28353f8cdae7821fd5e9ed1ed4c/Project%20Details/Hexapod%20Robot%20front%20view.png)

## 🎥 Project Demo Video

Click below to watch the project demonstration on LinkedIn!

https://www.linkedin.com/posts/gone-ramu-2155092b2_hexapod-robot-ugcPost-7498387249953247232-i-Am/?utm_source=social_share_send&utm_medium=member_desktop_web&rcm=ACoAAEsumfEBdfpbRoL04rRFCpsATJalW3cUVUA
## Future Improvements
- Improve the robot's walking gait.
- Add more movement controls through the mobile application.
- Improve Bluetooth communication and control responsiveness.
- Include a circuit diagram and assembly photographs.
- Add a demonstration video of the robot in action.

## Technologies Used
- Arduino
- Embedded Systems
- Bluetooth Communication
- Servo Motor Control
- MIT Scratch
- Robotics

**Note : For more project details go through the Project Details section and see the pdf**
