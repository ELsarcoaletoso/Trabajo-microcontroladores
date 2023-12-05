

int waterVal;
int wPin=11;
int lightPin = A0;
int waterPin = A1;
int lightVal;
int motor1 = 8;
int vel =10;
int pwm ;
float ref = 500.0;
int error;
int k = 1;
void setup() 
{
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  pinMode(wPin, OUTPUT);
  pinMode(motor1, OUTPUT);
  pinMode(motor1, OUTPUT);
  pinMode(vel, OUTPUT);
}

void loop()
{
 
  lightVal = analogRead(lightPin);                                                      
  Serial.print(lightVal);
   Serial.println("luz");
  delay(500);

  delay(100);

  if(lightVal >700)
  {
    digitalWrite(wPin, HIGH);
  }
  if(lightVal <= 700)
  {
    digitalWrite(wPin, LOW);
  }

   waterVal = analogRead(waterPin);                                                      
  Serial.print(waterVal);
  Serial.println("agua");
  delay(500);
  
  if ( waterVal>=1000)
  {
  Serial.println("error obteniendo los datos del sensor");
  } 
  error =ref-waterVal;
  pwm =k*error;
  
    analogWrite(vel,pwm); 
    digitalWrite(motor1, HIGH);
    delay(2000);

  if (pwm>225)
  { 
   pwm =225;
  }
}

