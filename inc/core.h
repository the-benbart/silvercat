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
screen()
int screen(lcdScreen)
{
  switch (lcdScreen)
  {

    case 'welcome':
      int choix = 2;
      gotoXY(25,0);
      LcdString ("Menu");
      gotoXY(0,2);
      if (choix == 1)
      {
        LcdString("-> ");
      }
      else
      {
        LcdString("-  ");
      }
      LcdString (" Lancer");
      gotoXY(0,3);
      if (choix == 2)
      {
        LcdString("-> ");
      }
      else
      {
        LcdString("-  ");
      }
      LcdString (" Options");
      gotoXY(0,4);
      if (choix == 3)
      {
        LcdString("-> ");
      }
      else
      {
        LcdString("-  ");
      }
      LcdString (" Calibrer");
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
