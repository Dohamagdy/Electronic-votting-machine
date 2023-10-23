/*
 * emv.c
 *
 * Created: 10/23/2023 10:23:10 PM
 * Author : dell
 */ 

#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "button.h"
#include "LCD.h"
int main(void)
{
   LCD_inti('A','B',0);
   BUTTON_inti('B',3);
   BUTTON_inti('B',4);
   BUTTON_inti('B',5);
   BUTTON_inti('B',6);
   BUTTON_inti('B',7);
   LCD_send_string('A',"A=0");
   LCD_movecursor('A',1,9);
   LCD_send_string('A',"B=0");
   LCD_movecursor('A',2,1);
   LCD_send_string('A',"C=0");
   LCD_movecursor('A',2,9);
   LCD_send_string('A',"D=0");
   int a=0,b=0,c=0,d=0;
    /* Replace with your application code */
    while (1) 
    {
		if (BUTTON_read('B',3)==1&&a<999999)
		{
		a++;
		char ar[10];
		sprintf(ar,"%d",a);
		LCD_movecursor('A',1,3);
		LCD_send_string('A',ar);	
		_delay_ms(200);
		}
		else if (BUTTON_read('B',4)==1&&b<999999)
		{
			b++;
			char ar[10];
			sprintf(ar,"%d",b);
			LCD_movecursor('A',1,11);
			LCD_send_string('A',ar);
			_delay_ms(200);
		}
		else if (BUTTON_read('B',5)==1&&c<999999)
		{
			c++;
			char ar[10];
			sprintf(ar,"%d",c);
			LCD_movecursor('A',2,3);
			LCD_send_string('A',ar);
			_delay_ms(200);
		}
		else if (BUTTON_read('B',6)==1&&d<999999)
		{
			d++;
			char ar[10];
			sprintf(ar,"%d",d);
			LCD_movecursor('A',2,11);
			LCD_send_string('A',ar);
			_delay_ms(200);
		}
		else if(BUTTON_read('B',7)==1)
		{
			a=0,b=0,c=0,d=0;
			 LCD_movecursor('A',1,0);
			 LCD_send_string('A',"A=0");
			 LCD_movecursor('A',1,9);
			 LCD_send_string('A',"B=0");
			 LCD_movecursor('A',2,1);
			 LCD_send_string('A',"C=0");
			 LCD_movecursor('A',2,9);
			 LCD_send_string('A',"D=0");
			_delay_ms(200);
		}
		
		
		
		
		
    }
}

