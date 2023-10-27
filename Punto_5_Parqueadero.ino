const int blueLed = 5;
const int redLed = 6;
const int greenLed = 7;
const int Button1= 3;
const int Button2= 4;
const int dipSwitch[] = {11, 10, 9, 8};
int ButtonState1 = 0;
int ButtonState2 = 0;
int push=0;
int recaudo=0;
int tarifa=5000;

void setup()
{
  pinMode(redLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
  
  pinMode(Button1,INPUT);
  pinMode(Button2,INPUT);
  Serial.begin(9600);

  
} 
void loop ()
{
  ButtonState1 = digitalRead(Button1);
  if (ButtonState1 == HIGH)
  {
 digitalWrite(greenLed, HIGH);
   recaudo=recaudo+tarifa;
    Serial.print("se han recolectado: ");
    Serial.println(recaudo);
    push++;
    Serial.print("dentro de el parqueadeor hay: ");
    Serial.println(push);
    delay (100);
  } 
else 
{
 digitalWrite(greenLed, LOW);
}
  if (push>=10)
{
 digitalWrite(redLed,HIGH);
 digitalWrite(greenLed,false);
 
}
  else
  {
    digitalWrite(redLed,LOW);
    digitalWrite(greenLed,true);
  }

  ButtonState2 = digitalRead(Button2);

if (ButtonState2 == HIGH)
{ 
 digitalWrite(redLed, HIGH);
   push--;
  Serial.print("el parqueadero esta lleno hay ");
    Serial.println(push);
 delay(1000);
    Serial.println(push);
    delay (100);
} 
  
else 
{
 digitalWrite(blueLed, LOW);
}
 
}
