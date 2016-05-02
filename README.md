# 3dPi2c
i2c access on the 3ds's MCU using a RaspberryPi

#Purpose
this will be used for obtaining the OTP HASH of a 3ds with nothing but a Raspberry Pi and a few other external components

#TODO
-find the deviceId of the 3ds's MCU
-write code which will reboot the 3ds after a new key has been written into NAND
-write code to read out specific registers on the MCU and act according to how they are set
-write code to retrieve the OTP HASH once it has been found

#Library
This will be using the WiringPi library, you can read more about that here: http://wiringpi.com/
