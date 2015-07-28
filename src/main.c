/* main script for drive the program */
#include <stdio.h>
#include <inc/gears.h>
#include <src/main.c>

int main (int argc, char *argv[])
{
  init();
  menu();
  steve();
  return 0;

  int choixMenu;

  printf("=== Menu ===\n\n");
  printf("Lancer le protocole de peignage\n");
  printf("Modifier le protocole\n");
  printf("recalibrer le peigne ADN\n");
  scanf("%d", &choixMenu);

  printf("\n");

  switch (choixMenu)
  {
    case 1:
       printf("Lancement du protocole de peignage");
       break;
    case 2:
       printf("Lancement de l'outil de modification du protocole");
       break;
    case 3:
       printf("La machine est en train de se recalibrer");
       break;
    default:
       printf("Vous n'avez pas entré votre choix");
       break;
  }

  printf("\n\n");

  return 0;
}
