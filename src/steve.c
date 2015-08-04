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
    token = 0
    gearsUP(struct config(calibrageSpeed))
    token = 1
  }
  screen(calibrageStop)

  /////////////////////////////////////////////////////

  //                calibrage stage off              //

  /////////////////////////////////////////////////////

  //                Peigne gearsDown on              //

  /////////////////////////////////////////////////////
  screen(downStart)
  while ( captorDown != 1 || token == 1 )
  {
    token = 0
    screen(downRUN)
    gearsDown(struct config(downSpeed))
    token = 1
  }
  screen(downStop)
  /////////////////////////////////////////////////////

  //                Peigne gearsDown off             //

  /////////////////////////////////////////////////////

  //                Peigne gearsHold on              //

  /////////////////////////////////////////////////////
  screen(holdStart)
  while (captorDown == 1 || token == 1)
  {
    token = 0
    screen(holdRUN)
    sleep (struct config(holdSleep))
    token = 1
  }
  screen(holdStop)
  /////////////////////////////////////////////////////

  //                Peigne gearsHold off             //

  /////////////////////////////////////////////////////

  //                Peigne gearsUP on                //

  /////////////////////////////////////////////////////
  screen(upStart)
  while ( captorUp != 1 || token == 1 )
  {
    token = 0
    screen(upRUN)
    gearsUp(struct config(upSpeed))
    token = 1
  }
  screen(upStop)
}
/////////////////////////////////////////////////////

//                Peigne gearsUP off               //

/////////////////////////////////////////////////////
