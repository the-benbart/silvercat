//  Steve header //  The motor/LCD/PushButtoms API//
////////////////////////////////////////////////////////////////////////////////
//                          motor control                                     //
////////////////////////////////////////////////////////////////////////////////
gearsDown(int); // function for climb the platform
gearsUp(int); // function for descend the platform
////////////////////////////////////////////////////////////////////////////////
//                          LCD control                                       //
////////////////////////////////////////////////////////////////////////////////
screen()
int screen(lcdScreen)
{
  switch (lcdScreen)
  {

    case 'welcome':
      LcdString(" La machine se prépare, \n");
      LcdString(" Veuillez Patienter");
    break;
    case 'steveStartup':
      LcdString(" Le protocole de peignage \n");
      LcdString(" d'ADN commence");
    break;
    case 'optStartup':
      LcdString("Menu de configuration :\n");
    break;
    case 'calibrageStart':
      LcdString("La machine se calibre\n");
      LcdString(" Chargement ... ");
    break;
    case 'calibrageRUN':
    LcdString("La machine est en cours de\n");
      LcdString("calibrage");
    break;
    case 'calibrageStop':
      LcdString("Ma machine à fini de se calibrer\n");
    break;
    case 'tokenError':
      LcdString("Une erreur est survenue \n");
      LcdString("pendant le protocole\n");
      LcdString("Err: tokenError");
    break;
    case 'downStart':
      LcdString("Descente des lamelles\n");
      LcdString(" Chargement ... ");
    break;
    case 'downRUN':
      LcdString("Descente des lamelles\n");
      LcdString("En cours");
    break;
    case 'downStop':
      LcdString("Les lamelles sont plongées\n");
    break;
    case 'holdStart':
      LcdString("Les lamelles sont plongées\n");
      LcdString("Temps d'incubation : %d", holdSleep);
    break;
    case 'holdRUN':
      LcdString("Les lamelles sont plongées\n");
      LcdString("Temps restant : %d", holdSleepRemaining);
    break;
    case 'holdStop':
      LcdString("incubation terminé");
    break;
    case 'upStart':
      LcdString("Les lamelles vont maintenant\n");
      LcdString("remonter lentement.\n");
      LcdString("Chargement")
    break;
    case 'upRUN':
      LcdString("Les lamelles sont en train de remonter\n");
      LcdString("...  ...  ...  ...");
    break;
    case 'upStop':
      LcdString("Les lamelles sont prêtes\n");
    break;
    case 'alertStart':
      LcdString("Vous pouvez maintenant reprendre\n");
      LcdString("vos lamelles");
    break;
    case 'alertRUN':
      LcdString("Vous pouvez maintenant reprendre\n");
      LcdString("vos lamelles");
    break;
    case 'alertStop':
      LcdString("Le programme va maintenant\n");
      LcdString("revenir au menu principale");
    break;
    case 'optUpSpeed':
      LcdString("Veuillez indiquer la vitesse\n");
      LcdString("de remonter :");
    break;
    case 'optDownSpeed':
      LcdString("Veuillez indiquer la vitesse\n");
      LcdString("de descente :");
    break;
    case 'optIncubTime':
      LcdString("Veuillez le Temps\n");
      LcdString("d'incubation :");
    break;
    case 'optAlertType':
      LcdString("Veuillez indiquer le Type\n");
      LcdString("d'alerte :");
    break;
    case 'optError':
      LcdString("Une erreur est survenue\n");
      LcdString("Err: optError");
    break;
    default
      LcdString("Err: ScreenDefault");
    break;
    }
  }
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
////////////////////////////////////////////////////////////////////////////////
//                              Set Options Menu                              //
////////////////////////////////////////////////////////////////////////////////
      optUpSpeed()
      {
        screen(optUpSpeed)
        switch (cardinal)
        {
          case up:
          continue;

          case left:
          break;

          case right:
          optSetUpSpeed();
          break;

          case down:
          optDownSpeed();
          break;

          default
          screen(errOptUpSpeed);
        }
      }
      optDownSpeed()
      {
        screen(optDownSpeed)
        switch (cardinal)
        {
          case up:
          continue;

          case left:
          break;

          case right:
          optSetDownSpeed();
          break;

          case down:
          optIncubTime();
          break;

          default
          screen(errOptDownSpeed);
        }
      }
      optIncubTime()
      {
        screen(optIncubTime)
        switch (cardinal)
        {
          case up:
          continue;

          case left:
          break;

          case right:
          optSetIncubTime();
          break;

          case down:
          optAlertType();
          break;

          default
          screen(errOptIncubTime);
        }
      }
      optAlertType()
      {
        screen(optDownSpeed)
        switch (cardinal)
        {
          case up:
          continue;

          case left:
          break;

          case right:
          optSetIncubTime();
          break;

          case down:
          optUpSpeed();
          break;

          default
          screen(errOptIncubTime);
        }
      }
