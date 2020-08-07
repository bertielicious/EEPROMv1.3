#include "config.h"
#include "picEEPromOutputs.h"
#include "picEEPromInputs.h"
#include "setAddress.h"
#include <stdio.h>

uchar readEEProm(uint address)
{
    uchar byte = 0;
    WE = 1;             // write enable on EEPROM is disabled
   
    setAddress(address,OUTPUT_EN); // put address where you want to read from on the address inputs of the EEPROM, then enable EEPROM outputs
    picEEPromInputs();  // set  PIC  I/O pins connected to EEPROM to inputs
 
    byte = PORTCbits.RC3|(PORTCbits.RC2<<1)|(PORTCbits.RC1<<2)|(PORTCbits.RC0<<3)|(PORTAbits.RA4<<4)|(PORTAbits.RA2<<5)|(PORTBbits.RB4<<6)|(PORTAbits.RA5<<7);
    __delay_ms(10);
    printf("readEEProm bit 7 = %d\n", (byte & 0x80)>>7);
    printf("readEEProm bit 6 = %d\n", (byte & 0x40)>>6);
    printf("readEEProm bit 5 = %d\n", (byte & 0x20)>>5);
    printf("readEEProm bit 4 = %d\n", (byte & 0x10)>>4);
    printf("readEEProm bit 3 = %d\n", (byte & 0x08)>>3);
    printf("readEEProm bit 2 = %d\n", (byte & 0x04)>>2);
    printf("readEEProm bit 1 = %d\n", (byte & 0x02)>>1);
    printf("readEEProm bit 0 = %d\n",  byte & 0x01);
    printf("read EEProm byte = %d\n", byte);
    
    return byte;// return value of byte to caller
}
