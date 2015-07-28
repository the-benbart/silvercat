/* Steve protocol header, assembly of function for make the Steve job's
function init
function doCalculTime
function doUp
function doHold
function doDown
function doFinish
function calibrage
*/

calibrage()
{
  if ($captorDown=1 && captorUp=0)
  {
    doUp();
  }
  else if (captorUp=1 && captorDown=0)
  {
    lcdCompleted();
  }
  else if ( captorUp=1 && captorDown=1)
  {
    lcdErrorCalibrage1();
  }
}
