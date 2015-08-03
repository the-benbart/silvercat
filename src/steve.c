/* main script for drive Steve protocol */
#include "motors.h"
#include "lcd.h"
#include "core.h"
void steve( void )
{
  do
  {
    takeToken(1); // Take the Token / If 0=return token / 1=Got Token
    sreen(1);
    if (captorUp = 0) // calibrage
    {
      motorControl(1); // 0 = Idle 1=To UP 2= To Down
    }                 // End calibrage
                      //Down
  }
while( stop == 0);

return 0;
}
