double sensorValue=0 ;
double R1 = 1048700;
double R2 = 2.41;
double ResisterValue = 1048702.41;
double sensorVoltage=0 ;
void setup() {
 pinMode(A1,INPUT);
 Serial.begin(9600);
}
void loop() {
  double Vin=5;
  int i;
  for(i=0;i<=4;i++)
sensorValue = 0.7* sensorValue + 0.3* analogRead(A1);
sensorVoltage = sensorValue * 5 / 1024;
R1 = sensorVoltage * (1048700) / Vin;
Serial.println(sensorValue);
Serial.println(sensorVoltage );
Serial.println(R1);
delay(500);
}
