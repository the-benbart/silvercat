/* main script for drive the program */
#include <stdio.h>
#include "inc/gears.h"
#include "src/steve.c"
#include "inc/lcd.h"
#include <time.h>
/* Main contain only "mainMenu"
inch case contain :
1 - LCD display message
2 - Console preview
3 - Doing Job or Function
4 - Breaking switch
*/



int main (void)
{
  int mainMenu;
  screen(welcome);
  switch (mainMenu)
  {

    case 1:
      screen(steveStartup);
      steve();
    break;

    case 2:
      screen(optStartup);
      opt();
    break;

    case 3:
      doCalibrate();
    break;

    default:
      screen(errMainMenu);
    break;

  }
  return 0;

}
