/* main script for drive the program */
#include <stdio.h>
#include "inc/gears.h"
#include "src/steve.c"
#include "inc/lcd.h"

/* Main contain only "menu_principale"
inch case contain :
1 - LCD display message
2 - Console preview
3 - Doing Job or Function
4 - Breaking switch
*/



int main (int argc, char *argv[])
{
  int menu_principale;

  lcdShow( int lcdScreen = 100 );
  printf("---=== Menu ===---\n\n");
  printf("Lancer le protocole de peignage\n");
  printf("Modifier le protocole\n");
  printf("recalibrer le peigne ADN\n");
  scanf("%d", &menu_principale);
  printf("\n");

  switch (menu_principale)
  {

    case 1:
      lcdShow(int lcdScreen = 1);
      printf("Lancement du protocole de peignage ...");
      job_steve();
      break;

    case 2:
      lcdShow( int lcdScreen = 2);
      printf("Lancement de l'outil de modification du protocole ...");
      job_modification_protocole();
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
