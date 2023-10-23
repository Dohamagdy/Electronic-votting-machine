/*
 * button.c
 *
 * Created: 9/14/2023 12:23:11 AM
 *  Author: dell
 */ 
#include "dio.h"
void BUTTON_inti(char port ,char pin)
{
	DIO_setpindir(port,pin,0);
}
char BUTTON_read(char port ,char pin)
{
	return DIO_readpin(port,pin);
	
}
