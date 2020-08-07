#include "config.h"
#include "serialByte.h"
#include "latchClock.h"
#include <stdio.h>
/* accepts a 16 bit address and breaks it down into two bytes
 to tell the EEPROM where we want to write or read data*/
void setAddress(uint address, uint OE)// OE is low when we read from EEPROM, high when we write to EEPROM
{
    uchar addressH, addressL;
    addressH = (OE | address)>>8;   // high byte of address or'd with OE (Output Enable of EEPROM))
    addressL = address & 0x00ff;    // low byte of address
  
    serialByte(addressH);
    serialByte(addressL);
    latchClock();  
}

