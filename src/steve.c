/* main script for drive Steve protocol */
#include "motors.h"
#include "lcd.h"
#include "core.h"
void steve( void )
{
  do
  {

    lcdCalibrage();
    calibrage();

    lcdDown();
    doDown();

    lcdHold();
    doHold();

    lcdUp();
    doUp();

    lcdTerminate();
    calibrage();
  }
while( stop == 0);

return 0;
}
