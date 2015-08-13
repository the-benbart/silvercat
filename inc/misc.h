/* DRIVERS for captors and pushbuttom*/
////////////////////////////////////////////////////////////////////////////////
//                          PushButtoms                                       //
////////////////////////////////////////////////////////////////////////////////
cardinal(analogRead(A0)){
  Serial.begin(9600);
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0);
    while (voltage <= 3.9 || voltage >= 4.1 ) {
      direction = left
    }
    while (voltage <= 3.72 || voltage >= 3.77 ) {
      direction = up
    }
    while (voltage <= 3.30 || voltage >= 3.35 ) {
      direction = down
    }
    while (voltage <= 2.47 || voltage >= 2.52 ) {
      direction = right
    }
    return direction
}
