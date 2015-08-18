//  Steve header //  The motor/LCD/PushButtoms API//
////////////////////////////////////////////////////////////////////////////////
//                          motor control                                     //
////////////////////////////////////////////////////////////////////////////////
gearsDown(int); // function for climb the platform
gearsUp(int); // function for descend the platform

////////////////////////////////////////////////////////////////////////////////
//                           calibrage stage                                  //
////////////////////////////////////////////////////////////////////////////////
  doCalibrate()
  {
    screen(calibrageStart);
    while ( captorUP != 1 || token == 1 ) //
    {
      screen(calibrageRUN);
      gearsUp(struct config(calibrageSpeed));
      token = token++;
    }
    screen(calibrageStop);
    if ( token != 2 )
    {
      screen(tokenError);
      break;
    }
  }
////////////////////////////////////////////////////////////////////////////////
//                            gearsDown stage                                 //
////////////////////////////////////////////////////////////////////////////////
  doDown()
  {
    screen(downStart);
    while ( captorDown != 1 || token == 2 )
    {
      screen(downRUN);
      gearsDown(struct config(downSpeed));
      token = token++;
    }
    screen(downStop);
    if ( token != 3 )
    {
      screen(tokenError);
      break;
    }
  }
////////////////////////////////////////////////////////////////////////////////
//                            Peigne gearsHold stage                          //
////////////////////////////////////////////////////////////////////////////////
  doHold()
    {
      screen(holdStart);
      while (captorDown == 1 || token == 3)
      {
        screen(holdRUN);
        sleep(struct config(holdSleep));
        token = token++;
      }
      screen(holdStop);
      if ( token != 4 )
      {
        screen(tokenError);
        break;
      }
    }
////////////////////////////////////////////////////////////////////////////////
//                              Peigne gearsUp stage                          //
////////////////////////////////////////////////////////////////////////////////
    doUp()
      {
        screen(upStart);
        while ( captorUp != 1 || token == 4 )
        {
          screen(upRUN);
          gearsUp(struct config(upSpeed));
          token = token++;
        }
        screen(upStop);
        if ( token != 5 )
        {
          screen(tokenError);
          break;
        }
      }
////////////////////////////////////////////////////////////////////////////////
//                                Peigne Alert stage                          //
////////////////////////////////////////////////////////////////////////////////
    doAlert()
      {
        screen(alertStart);
        while ( captorDown == 1 || token == 5 )
        {
          screen(alertRUN);
          bipAlert(struct config(alertMod));
          token = token++;
          interface(any);
        }
        screen(alertStop);
        if ( token != 6 )
        {
          screen(tokenError);
          break;
        }
      }
