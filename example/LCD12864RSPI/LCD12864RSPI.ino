/*
@Author:TONYLABS
@PIN1 = GND
@PIN2 = 5V
@RS(CS) = 8; 
@RW(SID)= 9; 
@EN(CLK) = 3;
@PIN15 PSB = GND;
*/
 
#include "LCD12864RSPI.h"
#define AR_SIZE( a ) sizeof( a ) * sizeof( a[0] )

unsigned char show1[]="TONYLABS";

void setup()
{
  LCDA.Initialise(); //@Initialize
  delay(100);
}
 
void loop()
{
  LCDA.CLEAR();//@Clear Screen
  delay(100);
  LCDA.DisplayString(0,0,show1,AR_SIZE(show1));
  delay(5000);
  LCDA.CLEAR();//@Clear Screen
  delay(100);
}
