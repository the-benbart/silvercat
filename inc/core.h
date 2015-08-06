// Internals function

////////////////////////////////////////////////////////////////////////////////
//                          Main user config                                  //
////////////////////////////////////////////////////////////////////////////////

struct config // Core configuration, PLEASE DON'T TOUCH
{
  int calibrageSpeed[255]; // 0-255 speed to Calibrate, DO NOT TOUCH
  int downSpeed[255]; // 0-255 speed to DOWN, DO NOT TOUCH
  int holdSleep[255]; // Time to incubate, DO NOT TOUCH
  int upSpeed[255]; // 0-255 speed to UP, DO NOT TOUCH
  int alertMod[2]; // 0=No Alert / 1 = Few 3 bip alert / 2 = One bip every 5 seconds
}

////////////////////////////////////////////////////////////////////////////////
//                          LCD control                                       //
////////////////////////////////////////////////////////////////////////////////
