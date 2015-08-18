// Internals function
////////////////////////////////////////////////////////////////////////////////
//                            Variables init                                  //
////////////////////////////////////////////////////////////////////////////////
int choix = 1;
int menuScroll = 1;
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
//                             Menu function                                  //
////////////////////////////////////////////////////////////////////////////////
switch (cursorMenu())
{
  case 1:
  menuScroll--;
  break;
  case 2:
  choix--;
  break;
  case 3:
  choix++;
  break;
  case 4:
  menuScroll++;
  break;
}

int menuTicket(int id)
{
  if (id == choix) { LcdString ("->");  }
  else { LcdString ("- "); }
  switch (choix)
  {
    case 1:
    if ( menuScroll == 2 ) { steve(); }
    break;
    case 2:
    if ( menuScroll == 2 ) { opt(); }
    break;
    case 3:
    if ( menuScroll == 2 ) { doCalibrate(); }
    break;
  }
}
////////////////////////////////////////////////////////////////////////////////
//                               Menu behavor                                 //
////////////////////////////////////////////////////////////////////////////////
if (choix >= 3) { choix = 3; }
if (choix <= 1) { choix = 1; }
////////////////////////////////////////////////////////////////////////////////
//                             Screen()  define                               //
////////////////////////////////////////////////////////////////////////////////
screen()
int screen(lcdScreen)
{
  LcdClear()
  switch (lcdScreen)
  {
    case 'steveStartup':
      gotoXY(25,0);
      LcdString("Peignage");
      gotoXY(0,2);
      LcdString("Le protocole");
      gotoXY(0,3);
      LcdString("demmarre");
    break;
    case 'optStartup':
      gotoXY(25,0);
      LcdString("Options");
      gotoXY(0,3)
      LcdString("Menu de configuration");
    break;
    case 'calibrageStart':
      gotoXY(25,0);
      LcdString("Calibrage");
      gotoXY(0,3);
      LcdString("Chargement ...");
    break;
    case 'calibrageRUN':
      gotoXY(25,0);
      LcdString("Calibrage");
      gotoXY(0,3);
      LcdString("En cours");
    break;
    case 'calibrageStop':
      gotoXY(25,0);
      LcdString("Calibrage");
      gotoXY(0,3);
      LcdString("Fin");
    break;
    case 'tokenError':
      gotoXY(25,0);
      LcdString("Erreur\n");
      gotoXY(0,2);
      LcdString("Err: tokenError");
    break;
    case 'downStart':
      gotoXY(25,0);
      LcdString("Descente");
      gotoXY(0,2);
      LcdString("Chargement ...");
    break;
    case 'downRUN':
      gotoXY(25,0);
      LcdString("Descente")
      gotoXY(0,2);
      LcdString("En cours");
    break;
    case 'downStop':
      gotoXY(25,0);
      LcdString("Descente")
      gotoXY(0,2);
      LcdString("Fin")
    break;
    case 'holdStart':
      gotoXY(25,0);
      LcdString("incubation")
      gotoXY(0,2);
      LcdString("chargement ...")
    break;
    case 'holdRUN':
      gotoXY(25,0);
      LcdString("incubation")
      gotoXY(0,2);
      LcdString("En cours")
    break;
    case 'holdStop':
      gotoXY(25,0);
      LcdString("incubation")
      gotoXY(0,2);
      LcdString("Fin")
    break;
    case 'upStart':
      gotoXY(25,0);
      LcdString("Monter")
      gotoXY(0,2);
      LcdString("Chargement ...")
    break;
    case 'upRUN':
      gotoXY(25,0);
      LcdString("Monter")
      gotoXY(0,2);
      LcdString("En cours")
    break;
    case 'upStop':
      gotoXY(25,0);
      LcdString("Monter")
      gotoXY(0,2);
      LcdString("Fin")
    break;
    case 'alertStart':
      gotoXY(25,0);
      LcdString("Alert")
      gotoXY(0,2);
      LcdString("Le protocole")
      gotoXY(0,3);
      LcdString("S'est executer");
    break;
    case 'alertRUN':
      gotoXY(25,0);
      LcdString("Alert");
      gotoXY(0,2);
      LcdString("reprenez");
      gotoXY(0,3);
      LcdString("vos lamelles");
    break;
    case 'alertStop':
      gotoXY(25,0);
      LcdString("Le programme va maintenant\n");
      LcdString("revenir au menu principale");
    break;
    case 'optUpSpeed':
      gotoXY(0,0);
      LcdString("option/Monter");
      gotoXY(0,2);
      LcdString("Renseigner la vitesse");
      gotoXY(0,3);
      LcdString("de remonter :");
    break;
    case 'optDownSpeed':
      gotoXY(0,0);
      LcdString("option/Descente");
      gotoXY(0,2);
      LcdString("Renseigner la vitesse");
      gotoXY(0,3);
      LcdString("de descente :");
    break;
    case 'optIncubTime':
      gotoXY(0,0);
      LcdString("option/incubation");
      gotoXY(0,2);
      LcdString("Renseigner le temps");
      gotoXY(0,3);
      LcdString("d'incubation :");
    break;
    case 'optAlertType':
      gotoXY(0,0);
      LcdString("option/Alerte");
    break;
    case 'optError':
      gotoXY(25,0);
      LcdString("Erreur\n");
      gotoXY(0,2);
      LcdString("Err: optError");
    break;
    default
      gotoXY(25,0);
      LcdString("Erreur\n");
      gotoXY(0,2);
      LcdString("Err: ScreenDefault");
    break;
    }
  }
