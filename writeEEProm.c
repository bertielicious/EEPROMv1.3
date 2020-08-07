#include "config.h"
#include "picEEPromOutputs.h"
#include "setAddress.h"
#include <stdio.h>

void writeEEProm(uint address, uchar data)
{
    
    setAddress(address, INPUT_EN);
 
     
    PORTAbits.RA5 = (data&0b10000000)>>7;
    PORTBbits.RB4 = (data&0b01000000)>>6;    
    PORTAbits.RA2 = (data&0b00100000)>>5;   
    PORTAbits.RA4 = (data&0b00010000)>>4;   
    PORTCbits.RC0 = (data&0b00001000)>>3;   
    PORTCbits.RC1 = (data&0b00000100)>>2;    
    PORTCbits.RC2 = (data&0b00000010)>>1;   
    PORTCbits.RC3 = (data&0b00000001);
    WE = 1;
    WE = 0;
    __delay_us(125);
    WE = 1;
  
   __delay_ms(100);
} 
