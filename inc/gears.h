/* Steve protocol header, assembly of function for make the Steve job's
function init
function doCalculTime
function doUp
function doHold
function doDown
function doFinish
function calibrage
*/

/* Motor Control */
void init(void)
  {
  }
void doUp(void)
  {
  }
void doHold(void)
  {
  }
void doDown(void)
  {
  }
void doFinish(void)
  {
  }

/* LCD Control */

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




calibrage()
{
  if ( captorDown=1 && captorUp=0 )
  {
    doUp();
  }
  else if ( captorUp=1 && captorDown=0 )
  {
    lcdCompleted();
  }
  else if ( captorUp=1 && captorDown=1 )
  {
    lcdErrorCalibrage1();
  }
}

doDown()
{
  if ( captorDown=0 && captorUp=1

}
