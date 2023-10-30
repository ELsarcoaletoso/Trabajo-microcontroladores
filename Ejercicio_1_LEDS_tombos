int ButtonState = 0;

void setup() 
{
 pinMode(D8,OUTPUT);
 pinMode(D3,INPUT);
 pinMode(D4,OUTPUT);
 pinMode(D7,OUTPUT);
}
void loop() 
 {
  {
 digitalWrite(D4,HIGH);
 digitalWrite(D7,HIGH);
 delay(500);
 digitalWrite(D4,LOW);
 digitalWrite(D7,false);
 delay(500);
 }
 ButtonState = digitalRead(D3);
 if (ButtonState==HIGH)
 {
 digitalWrite(D8,LOW);

 delay(200);
}
else
{
 digitalWrite(D8,HIGH);
 
 delay(200);
}
 }


