#include <DHT.h>
#include <DHT_U.h>
#include <DHT.h>
#define DHTPIN D4
#define DHTTYPE DHT11
#define RED D7
#define BLUE D8
DHT dht(DHTPIN, DHTTYPE);
float h;
float t;
void setup() 
{
  Serial.begin(115200);
  dht.begin();
 pinMode(BLUE,OUTPUT);
 pinMode(RED,OUTPUT);
}
 
void loop() 
{
    delay(5000);

  h = dht.readHumidity();
  t = dht.readTemperature();

  if (isnan(h) || isnan(t)) 
  {
    Serial.println("error obteniendo los datos del sensor DHT11");
    return;
  }
  float hic = dht.computeHeatIndex(t, h, false);
 
  Serial.print("humedad: ");
  Serial.print(h);
  Serial.println(" % \t");
  Serial.print("temperatura: ");
  Serial.print(t);
  Serial.println(" °C\t");  

if (dht.readTemperature() <20) 
{
   digitalWrite(RED, HIGH);
 } else {
   digitalWrite(RED, LOW);
 }

 if (dht.readHumidity() <20) 
 {
   digitalWrite(BLUE, HIGH);
 } else {
   digitalWrite(BLUE, LOW);
 }
}
