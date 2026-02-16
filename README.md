# trafficLightSystem
This project implements a basic traffic light control system using an Arduino board. It simulates vehicle and pedestrian signals using LEDs and a passive buzzer with time-based state transitions.

#Features

*Vehicle signals (Red, Green, Blue as Yellow)
*Pedestrian indicator
*Passive buzzer for crossing alert
*Non-blocking timing using millis()

#Components

*Arduino board
*Red, Green, Blue LEDs
*Passive buzzer
*220Ω resistors
*Breadboard and jumper wires

#System operation

The system automatically cycles through traffic states (Green → Yellow → Red → Pedestrian). During the pedestrian phase, the buzzer provides an audible signal to indicate safe crossing time. The implementation uses a state-based logic model for structured and reliable operation.
