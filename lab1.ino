const byte LED = 13;
void setup() {
  pinMode(LED, OUTPUT);

 Serial.begin(9600);
 Serial.println("Hello,World");

}

void loop() 
{
  if(Serial.available())
  {
    char val;
    val = Serial.read();
   
    switch(val)
    {
    case  '0' :
      digitalWrite(LED,LOW);
      Serial.println("LED OFF");
      break;
    case  '1' :
      digitalWrite(LED,HIGH);
      Serial.println("LED ON");
      break;
    }
  }
}
