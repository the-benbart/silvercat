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
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                        INIT                                                           //
///////////////////////////////////////////////////////////////////////////////////////////////////////////
int main (void)
{
  gotoXY(25,0);
  LcdString (" Menu");
  gotoXY(0,2);
  menuTicket(1);
  LcdString (" Lancer");
  gotoXY(0,3);
  menuTicket(2);
  LcdString (" Options");
  gotoXY(0,4);
  menuTicket(3);
  LcdString (" Calibrer");
  delay(200);
}
