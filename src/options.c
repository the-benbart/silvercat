/* gestion des options au protocole */
int tweakMenu;

screen(tweakMenu);
printf("---=== Menu ===---\n\n");
printf("vitesse de Monté ->\n");
printf("Vitesse de Descente ->\n");
printf("Temps d'incubation ->\n");
printf("Type d'alerte ->\n");
scanf("%d", &tweakMenu);
printf("\n");

switch (tweakMenu)
{

  case 1:
    screen(optUpSpeed);
    printf("vitesse de Monté\n");
    optUpSpeed();
    break;

  case 2:
    screen(optDownSpeed);
    printf("vitesse de Descente\n");
    optDownSpeed();
    break;

  case 3:
    screen(optIncubTime);
    printf("Temps d'incubation\n");
    optIncubTime();
    break;

  case 4:
    screen(optAlertType);
    printf("Type d'alerte\n", );
    optAlertType()

  default:
    screen(optError);
    printf("Vous n'avez fait votre choix \n ou le programme ne le reconnais pas");
    break;

}
return 0;
