

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
#include <DHT.h>
#define DHTPIN 4
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

float h;
int wPin=11;
int lightPin = A0;
int lightVal;
int motor1 = 8;
int vel =10;
int pwm ;
float ref = 50.0;
int error;
int k = 5;
void setup() 
{
  Serial.begin(9600);
  dht.begin();
  pinMode(lightPin, INPUT);
  pinMode(wPin, OUTPUT);
  pinMode(motor1, OUTPUT);
  pinMode(motor1, OUTPUT);
  pinMode(vel, OUTPUT);
}

void loop()
{
 
  lightVal = analogRead(lightPin);                                                      
  Serial.println(lightVal);
  delay(500);
  h = dht.readHumidity();
  delay(100);

  if(lightVal >700)
  {
    digitalWrite(wPin, HIGH);
  }
  if(lightVal <= 700)
  {
    digitalWrite(wPin, LOW);
  }
  {
     
  if (isnan(h)) 
  {
    Serial.println("error obteniendo los datos del sensor DHT11");
    return;
  }
  float hic = dht.computeHeatIndex(h, false);
 
  Serial.print("humedad: ");
  Serial.print(h);
  Serial.println(" % \t");
  }

  error =ref-h;
  pwm =k*error;
  
    analogWrite(vel,pwm); 
    digitalWrite(motor1, HIGH);
    delay(5000);
 
  
  if (pwm>225)
  { 
    digitalWrite(motor1, LOW);
  }
}
