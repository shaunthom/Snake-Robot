# Snake-Robot

It was funded by the Kerala State Council for Science, Technology and Environment (KSCSTE) . As inferred from the name, it resembles a biological snake. It is a four-wheel-drive surveillance device with an image capturing and audio recording facility, controlled by a wireless joystick module. It can survey hazardous areas and report back all the findings even real-time. Our team used motor-driving circuits to accomplish the project.

### Objective:

To develop a cutting-edge robotic monitoring solution, in collaboration with The Kerala State Council for Science, Technology and Environment (KSCSTE). It is aimed at enhancing surveillance capabilities in hazardous environments.

### Basic Principle:



### Working:

      All appropriate codes have been uploaded. The following are some brief descriptions of each C++ code:

##### 1. H-Bridge Motor Driving circuit.cpp :

This code controls a robot with two motors using a joystick. It reads joystick inputs for both vertical (forward/backward) and horizontal (left/right) movements. Based on the joystick's position, it adjusts the motor speeds and directions to control the robot's motion. The robot can move forward, backward, turn left, turn right, or stop, all based on the joystick's position. Motor speeds are adjusted using PWM signals, and the code ensures smooth control by preventing low-speed 'buzzing.'

##### 2. Motion Sensing Circuit.cpp :

This part is responsible for the automated monitoring of the surroundings whenver one of the Infrared sensor picks up an unknown entity. This code sets up a system that records and plays back sound when a sensor is activated. When the sensor is triggered, an LED lights up and the code records sound for a variable number of seconds. Finally a speaker plays it back. The LED turns off during playback. The process repeats when the sensor is triggered again.

##### 3. Wireless Transmission Module.cpp :

This Arduino code establishes wireless communication between a client and a server using NRF24 modules (NRF24 module is  a transceiver module). The client reads joystick values (X and Y axes) and maps them to a range of 0 to 255. It then sends these values to the server using a reliable data transfer protocol provided by the RHReliableDatagram library.

The server receives the joystick data, processes it, and sends a reply back to the client. The client waits for this reply and displays it on the serial monitor. The NRF24 modules communicate in a point-to-point manner, allowing remote control or data exchange between devices. 

   
Below are some snapshots:
![Live Img](Snake-Robot.jpeg)
