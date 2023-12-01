
#include <DHT.h>
#define DHTPIN 4
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

float h;
int wPin=7;
int lightPin = A0;
int lightVal;
int t = 500;
int motor = 8;
int vel =10;

void setup() 
{
  Serial.begin(9600);
  dht.begin();
  pinMode(lightPin, INPUT);
  pinMode(wPin, OUTPUT);
  pinMode(motor, OUTPUT);
  pinMode(vel, OUTPUT);
}

void loop()
{
 
  lightVal = analogRead(lightPin);                                                      
  Serial.println(lightVal);
  delay(t);

  if(lightVal >700)
  {
    digitalWrite(wPin, HIGH);
  }
  if(lightVal <= 700)
  {
    digitalWrite(wPin, LOW);
  }
  {
     delay(5000);
  h = dht.readHumidity();
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
  if(h>=80 )
  {
    analogWrite(vel,40); 
    digitalWrite(motor, HIGH);
    delay(2000);
    digitalWrite(motor, LOW);
    delay(5000);
  }
   if(h=60)
  {
    analogWrite(vel,100); 
    digitalWrite(motor, HIGH);
    delay(2000);
    digitalWrite(motor, LOW);
    delay(5000);
  }
  if (h<55)
   analogWrite(vel,225); 
    digitalWrite(motor, HIGH);
    delay(2000);
    digitalWrite(motor, LOW);
    delay(5000);  
   {  
    digitalWrite(motor, LOW);
    delay(5000);
  }   
}

