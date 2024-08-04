# Car Toll Gate System

This project is an Arduino-based car toll gate system that uses a servo motor and an ultrasonic sensor to detect the distance of a car and open the gate accordingly.

## Components

- Arduino board
- Ultrasonic sensor (HC-SR04)
- Servo motor (SG90)
- Jumper wires
- Breadboard

## Circuit Diagram


![298395896-c73c964d-4498-49f8-93dd-5aa18014e5b6](https://github.com/user-attachments/assets/0850afaa-f2f5-45f5-a224-4887d2bc31cd)


## Arduino Connections:-

Ultrasonic sensor  -->  Arduino

      trigger pin  --> digital pin 6
      
      echo pin     --> digital pin 7
      
      Vcc          --> 5v 
      
      Gnd          --> Gnd

Servo motor 

    control signal  of servo motor (ORANGE)  ---->   Digital pin Number 9 of arduino 
    
    vcc of servo motor (RED)                             --->   5v of arduino 
    
    GND of servo motor (BLACK)                      ---->   GND of arduino

You can connect multiple GND wires to Ardiuno through BreadBoard ( if required ).
