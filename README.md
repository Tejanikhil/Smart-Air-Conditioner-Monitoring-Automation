Smart air conditioners are coming with different 
faces and features and are embedded with different types of 
sensors like infrared sensor for the detection of human’s 
attention, temperature sensor for analyzing the surrounding 
temperatures, accelerometer sensors for measuring the 
windspeeds. Now-a-days Air conditioners also uses mobile 
phones, wearable devices (bracelets), Bluetooth module for 
the personal scheduling so that air conditioners cool the room 
before the user enters. Most of the smart air-conditioner that 
are coming into the market are embedded with sensor which 
can control the air conditioner but there are no devices which 
can monitor an Air conditioner. This paper presents a new 
device which can monitor refrigerant levels of the compressor 
using the principles of pressure changes in order to detect any 
gas leakages, the device is also embedded with temperature 
and humidity sensor for monitoring room temperature, 
passive infrared sensor for human detection, a Bluetooth 
module for setting the reference room temperature so that the 
compressor shuts down as the room temperature reaches the 
reference temperature. Safety features are also incorporated 
to avoid the exposure of CFCs to the atmosphere.  <br />

## Objectives: 
1. To design and develop a smart air conditioner device 
for automation and gas leakage detection. <br />
2. To study the effect of holes on the change in pressure. <br /> 
3. To develop a program that shows the real-world data to 
the user for switching the air conditioner manually. <br />

The flow chart shown below describes the working of the 
smart air conditioner device. <br />

![image](https://user-images.githubusercontent.com/102232692/160223949-8eb07d27-ae3e-4d18-bffd-acedaa356179.png)

As the Arduino gets the power it activates all the sensors 
except the PIR sensor and starts monitoring the room 
temperature and gas levels in the compressor, if the sensor 
detects any gas leakage Arduino won't let the air 
conditioner to be on, if the room temperature raises to a 
particular temperature the PIR sensor gets activated and 
detects the movements, as the PIR sensor detects the 
moments without any gas leakage detection the air 
conditioner will be switched on with the reference 
temperature set using the Bluetooth module. As the room 
temperature reaches the reference temperature the air 
conditioner will be switched off. In between if the sensor 
detects the gas leakage the user can manually switch off the 
air conditioner. 

The block diagram and design describes the connections of 
peripheral devices with the arduino uno r3 microcontroller. 

![image](https://user-images.githubusercontent.com/102232692/160223988-4ba49f2b-d305-428e-84f9-d7c33c210e0e.png)

