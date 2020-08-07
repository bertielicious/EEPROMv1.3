#include "config.h"
void picEEPromInputs(void)
{
    TRISCbits.TRISC3 = 1;   //pin 7
    TRISCbits.TRISC2 = 1;   //pin 14
    TRISCbits.TRISC1 = 1;   //pin 15
    TRISCbits.TRISC0 = 1;   //pin 16
    TRISAbits.TRISA4 = 1;   //pin 3
    TRISAbits.TRISA2 = 1;   //pin 17
    TRISBbits.TRISB4 = 1;   //pin 13
    TRISAbits.TRISA5 = 1;   //pin 2    
}
