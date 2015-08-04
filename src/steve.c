/* main script for drive Steve protocol */
#include <unistd.h>
#include <stdio.h>
#include "motors.h"
#include "lcd.h"
#include "core.h"

// Set token system & steve running job
int token = 1;
int calibrage;
int down;
int up;
int hold;
int alert;

int steve (void)
{
  screen(calibrageStart)
/////////////////////////////////////////////////////

//                calibrage stage on               //

/////////////////////////////////////////////////////
  while ( captorUP != 1 || token == 1 )
  {
    screen(calibrageRUN)
    gearsUP(struct config(calibrageSpeed))
    token = token++
  }
  screen(calibrageStop)

  /////////////////////////////////////////////////////

  //                calibrage stage off              //

  /////////////////////////////////////////////////////

  //                Peigne gearsDown on              //

  /////////////////////////////////////////////////////
  screen(downStart)
  while ( captorDown != 1 || token == 2 )
  {
    screen(downRUN)
    gearsDown(struct config(downSpeed))
    token = token++
  }
  screen(downStop)
  /////////////////////////////////////////////////////

  //                Peigne gearsDown off             //

  /////////////////////////////////////////////////////

  //                Peigne gearsHold on              //

  /////////////////////////////////////////////////////
  screen(holdStart)
  while (captorDown == 1 || token == 3)
  {
    screen(holdRUN)
    sleep (struct config(holdSleep))
    token = token++
  }
  screen(holdStop)
  /////////////////////////////////////////////////////

  //                Peigne gearsHold off             //

  /////////////////////////////////////////////////////

  //                Peigne gearsUP on                //

  /////////////////////////////////////////////////////
  screen(upStart)
  while ( captorUp != 1 || token == 4 )
  {
    screen(upRUN)
    gearsUp(struct config(upSpeed))
    token = token++
  }
  screen(upStop)
}
/////////////////////////////////////////////////////

//                Peigne gearsUP off               //

/////////////////////////////////////////////////////
