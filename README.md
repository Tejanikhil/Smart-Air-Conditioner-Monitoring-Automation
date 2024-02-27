# Smart Air Conditioner Automation System

Smart air conditioners are revolutionizing home comfort with their advanced features and embedded sensors. These sensors, including infrared, temperature, and accelerometer sensors, enable smart air conditioners to analyze surroundings and adjust settings accordingly. Additionally, modern air conditioners integrate with mobile devices and wearables for personalized scheduling.

While many smart air conditioners can control temperature effectively, there is a lack of devices that monitor and manage the air conditioner itself. This paper presents a new device capable of monitoring refrigerant levels, detecting gas leakages, and maintaining room temperature. The device is designed with safety features to prevent CFC exposure to the atmosphere.

## Objectives:

1. Design and develop a smart air conditioner device for automation and gas leakage detection.
2. Investigate the effect of pressure changes caused by holes.
3. Develop a user-friendly program for manual air conditioner control based on real-world data.

## Working Principle:

The flowchart below illustrates the working of the smart air conditioner device.

![Smart Air Conditioner Flowchart](https://user-images.githubusercontent.com/102232692/160223949-8eb07d27-ae3e-4d18-bffd-acedaa356179.png)

Upon power activation, the Arduino activates all sensors except the PIR sensor and begins monitoring room temperature and gas levels. If a gas leakage is detected, the Arduino prevents the air conditioner from operating. When the room temperature surpasses a threshold, the PIR sensor detects movement, prompting the air conditioner to turn on with the reference temperature set via the Bluetooth module. Once the room temperature reaches the reference temperature, the air conditioner shuts off. Users can manually turn off the air conditioner if gas leakage is detected.

## Block Diagram and Design:

The block diagram and design illustrate the connections of peripheral devices with the Arduino Uno R3 microcontroller.

![Block Diagram and Design](https://user-images.githubusercontent.com/102232692/160223988-4ba49f2b-d305-428e-84f9-d7c33c210e0e.png)
