/* main script for drive the program */
#include <stdio.h>
#include "inc/gears.h"
#include "src/steve.c"
#include "inc/lcd.h"
#include <time.h>
 LCDInit();

/* Main contain only "mainMenu"
inch case contain :
1 - LCD display message
2 - Console preview
3 - Doing Job or Function
4 - Breaking switch
*/



int main (int argc, char *argv[])
{
  int mainMenu;

  screen(welcome);
  printf("---=== Menu ===---\n\n");
  printf("Lancer le protocole de peignage\n");
  printf("Modifier le protocole\n");
  printf("recalibrer le peigne ADN\n");
  scanf("%d", &mainMenu);
  printf("\n");

  switch (mainMenu)
  {

    case 1:
      screen(steveStartup);
      printf("Lancement du protocole de peignage ...");
      steve();
      break;

    case 2:
      screen(optStartup);
      printf("Lancement de l'outil de modification du protocole ...");
      ();
      break;

    case 3:
      lcdShow( int lcdScreen = 3)
      printf("La machine est en train de se recalibrer");
      calibrage();
      break;

    default:
      lcdShow( int lcdScreen = 4 );
      printf("Vous n'avez fait votre choix \n ou le programme ne le reconnais pas");
      break;

  }
  return 0;

}
