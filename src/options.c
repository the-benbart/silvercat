/* gestion des options au protocole */
opt()
{
int tweakMenu;
screen(opt);
switch (opt)
{
  case 1:
    screen(optUpSpeed);
    optUpSpeed();
    break;

  case 2:
    screen(optDownSpeed);
    optDownSpeed();
    break;

  case 3:
    screen(optIncubTime);
    optIncubTime();
    break;

  case 4:
    screen(optAlertType);
    optAlertType()

  default:
    screen(errOpt);
    break;

}
return 0;
}
