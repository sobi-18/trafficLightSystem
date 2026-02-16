# trafficLightSystem
This project implements a basic traffic light control system using an Arduino board. It simulates vehicle and pedestrian signals using LEDs and a passive buzzer with time-based state transitions.

**Features**

1. Vehicle signals (Red, Green, Blue as Yellow)
2. Pedestrian indicator
3. Passive buzzer for crossing alert
4. Non-blocking timing using millis()

**Components**

1. Arduino board
2. Red, Green, Blue LEDs
3. Passive buzzer
4. 220Ω resistors
5. Breadboard and jumper wires

**System operation**

The system automatically cycles through traffic states :
>Green → Yellow → Red → Pedestrian

During the pedestrian phase, the buzzer provides an audible signal to indicate safe crossing time. The implementation uses a state-based logic model for structured and reliable operation.
