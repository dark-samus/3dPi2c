#include <wiringPi.h>
#include <wiringPiI2C.h>
#include <stdio.h>

void main()
{
	int filedesc = wiringPi2cSetup();
	bool success = 0;
	
	do 
	{
		wiringPiI2CWriteReg8(filedesc, 0x20, 1 << 2);

		delay(1000);

		uint8_t res = wiringPiI2CReadReg8(filedesc, 0x22);

		if(res & 0x2A)
		{	
			success = 1;
		}
	}while(!success)
	printf("Success! Took %u", millis());
}
