/* main script for drive the program */
#include <stdio.h>
#include "inc/gears.h"


int main (int argc, char *argv[])
{
  int menu_principale;

  printf("---=== Menu ===---\n\n");
  printf("Lancer le protocole de peignage\n");
  printf("Modifier le protocole\n");
  printf("recalibrer le peigne ADN\n");
  scanf("%d", &menu_principale);
  printf("\n");

  switch (menu_principale)
  {
    case 1:
       printf("Lancement du protocole de peignage ...");
       job_steve();
       break;
    case 2:
       printf("Lancement de l'outil de modification du protocole ...");
       job_modification_protocole();
       break;
    case 3:
       printf("La machine est en train de se recalibrer");
       calibrage();
       break;
    default:
       printf("Vous n'avez pas entré votre choix");
       break;
  }

  printf("\n\n");

  return 0;
}
