float Analogin = 0;

void setup() {
 pinMode(A0,INPUT);
Serial.begin(9600);
}
void loop() {
 int i;
 float Vin;
 for (i=0;i<=4;i++)
Analogin = 0.7* Analogin + 0.3* analogRead(A0);
Vin =  Analogin* 5 / 1024;
Serial.println(Vin);
delay(1000);
}
