const int red = D7;
const int blue = D6;
const int green = D5;
int color1;
int color2;
int color3;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);

  
  Serial.begin(115200);
}

void loop()
{
  {
    Serial.print("ingrese el codigo de color: ");
      Serial.print(color1);
      Serial.print(", ");
      Serial.print(color2);
       Serial.print(", ");
      Serial.print(color3);
       Serial.println(".");
  while (Serial.available()==0);
  }
 if (Serial.available()) 
{
   
    color1 = Serial.parseInt();
    color2 = Serial.parseInt();
    color3 = Serial.parseInt();
  }   
 {
  analogWrite(red, color1);
  analogWrite(blue, color2);
  analogWrite(green, color3);
 }
}
