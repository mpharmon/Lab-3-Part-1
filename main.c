#include <xc.h>
#include "config.h"
#include "../LCD.X/lcd.h"
#include "ADC.h"
#include "PWM.h"

void main(void){
  LCD_Init();
  ADC_Init();
  PWM_Init();
  char string[16];
  while(1){
    sprintf(string,"Voltage: %4.2fVdc",(ADC1BUF0/1023.0*3.3));
    LCD_PrintString(string);
    LCD_MoveCursor(1,1);
    //PWM_SetForward();
    //PWM_SetOC1DutyCycle(100);
    //PWM_SetOC2DutyCycle(75);
  };
}