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
  while ( captorUP != 1 || token == 1 )
  {
    screen(calibrageRUN)
    gearsUP(struct config(calibrageSpeed))
    token = token++
  }
  screen(calibrageStop)
  if ( token != 2 )
  {
    screen(tokenError)
    break;
  }

  /////////////////////////////////////////////////////

  //                calibrage stage off              //

  /////////////////////////////////////////////////////

  //                Peigne gearsDown on              //

  /////////////////////////////////////////////////////
  screen(downStart)
  while ( captorDown != 1 || token == 2 )
  {
    screen(downRUN)
    gearsDown(struct config(downSpeed))
    token = token++
  }
  screen(downStop)
  if ( token != 3 )
  {
    screen(tokenError)
    break;
  }
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
  if ( token != 4 )
  {
    screen(tokenError)
    break;
  }
  /////////////////////////////////////////////////////

  //                Peigne gearsHold off             //

  /////////////////////////////////////////////////////

  //                Peigne gearsUP on                //

  /////////////////////////////////////////////////////
  screen(upStart)
  while ( captorUp != 1 || token == 4 )
  {
    screen(upRUN)
    gearsUp(struct config(upSpeed))
    token = token++
  }
  screen(upStop)
  if ( token != 5 )
  {
    screen(tokenError)
    break;
  }
  /////////////////////////////////////////////////////

  //                Peigne gearsUP off               //

  /////////////////////////////////////////////////////

  //                Peigne Alert on                  //

  /////////////////////////////////////////////////////
  screen(alertStart)
  while ( captorDown == 1 || token == 5 )
  {
    screen(alert)
    bibAlert(struct config(alertMod))
    token = token++
    interface(any)
  }
  screen(alertStop)
  if ( token != 6 )
  {
    screen(tokenError)
    break;
  }
  /////////////////////////////////////////////////////

  //                Peigne Alert off                 //

  /////////////////////////////////////////////////////


}
