/* header for communication functions with USER */
#include 'inc/lcd_driver.h'

int lcdShow( int lcdScreen ){
  switch (lcdScreen) {

    case 1:
    lcdMessage (void)
    {
      LcdString(" La machine se prépare, \n")
      LcdString(" Veuillez Patienter")
    }
    break;

    case 2:
    /* job de modification du protocole */
    break;

    case 3:
    /* calibrage du peigne */
    break;

    case 4:
    /* Erreur choix du menu_principale */
    break;






  }
}
