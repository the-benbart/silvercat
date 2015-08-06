/* main script for drive Steve protocol */
#include <unistd.h>
#include <stdio.h>
#include "motors.h"
#include "lcd.h"
#include "core.h"

// Set token system & steve running job
int token = 1;
int steve (void)
{
  doCalibrate();
  doDown();
  doHold();
  doUp();
  doAlert();
}
