/* main script for drive Steve protocol */
void steve( void )
{
  lcdCalibrage();
  calibrage();

  lcdDown();
  doDown();

  lcdHold();
  doHold();

  lcdUp();
  doUp();

  lcdTerminate();
  calibrage();
return 0;
}
