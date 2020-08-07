#include "config.h"
//#include "putch.h"
#include <stdio.h>
#include "init.h"
#include "initEusart.h"
#include "serialByte.h"
#include "latchClock.h"
#include "setAddress.h"
#include "readEEProm.h"
#include "writeEEProm.h"
#include "picEEPromOutputs.h"
int counter, index, result = 0;

uchar num[16]={119,68,61,109,78,107,123,69,127,111,95,122,51,124,59,27};    // test data to writebto EEPROM (7 segment LED code 0 - F hex)
int main(void)
{
    init();         // set up ports as inputs or outputs
    initEusart();   // set up serial monitor 
    
    /*for(index = 0; index < 16; index++)
        {
            writeEEProm(index, num[index]);  // write num[16] data to EEPROM
        }*/
    for(index = 0; index < 16; index++)
        {
            result = readEEProm(index);     //read num[16] data to EEPROM
            printf("index = %d     result = %d\n", index,  result);  //print num[16] data to serial monitor
        }

    while(1)
    {
 
    }
    return 0;
}
