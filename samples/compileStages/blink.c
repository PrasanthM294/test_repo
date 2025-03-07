#include <stdio.h>
#include <pigpio.h>
#include <unistd.h>

#define GPIO_PIN (17u) //broadcom PIN Number

int main()
{
	unsigned int ret = 0;
	printf("\n included pigpio.h");

	//initialise Pigpio
	if(gpioInitialise() < 0)
	{
		printf("\n pigpio init failed");
		return 0;
	}
	else 
	{
		printf("\n pigpio init successful");
		
	}

	//set pin gpio mode
	if (gpioSetMode(GPIO_PIN, PI_OUTPUT) == 0) {
		printf("\n GPIO pin 17 mode is set to output ");
	}
	else {
		printf("\n GPIO pin mode set failed");
		return 0;
	}

	//get pin gpio mode
	if (gpioGetMode(GPIO_PIN) != PI_OUTPUT ) {
		printf("\n incorrect pin setting");
		return 0;
	}


	//pull down the GPIO pin
	if ( gpioSetPullUpDown(GPIO_PIN, PI_PUD_DOWN) == 0 ) {
		printf("\n Pull down is done ");
	}
	else {
		printf("\n Pull down failed");
		return 0;
	}

	while (1)	{
		
		//turn on LED for 1s
		gpioWrite(GPIO_PIN, 0);
		printf("\n GPIO is OFF");
		sleep(1);

		//turn off LED for 1s
		gpioWrite(GPIO_PIN, 1);
		printf("\n GPIO is ON");
		sleep(1);
	}	
	
	printf("\n");
	//to terminate gpio usage
	gpioTerminate();
	return 0;
}
