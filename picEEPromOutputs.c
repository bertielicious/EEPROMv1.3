#include "config.h"
void picEEPromOutputs(void)
{
    TRISCbits.TRISC3 = 0;   //pin 7 //LSB
    TRISCbits.TRISC2 = 0;   //pin 14
    TRISCbits.TRISC1 = 0;   //pin 15
    TRISCbits.TRISC0 = 0;   //pin 16
    TRISAbits.TRISA4 = 0;   //pin 3
    TRISAbits.TRISA2 = 0;   //pin 17
    TRISBbits.TRISB4 = 0;   //pin 13
    TRISAbits.TRISA5 = 0;   //pin 2  //MSB
}
