const int red = 11;
const int blue = 10;
const int green = 9;
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
 Serial.print("ingrese el codigo de color: ");
  while (Serial.available()==0);
  {
      Serial.print(color1);
      Serial.print(", ");
      Serial.print(color2);
       Serial.print(", ");
      Serial.print(color3);
       Serial.println(".");
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
