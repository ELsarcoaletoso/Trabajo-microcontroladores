#include <DHT.h>
#include <DHT_U.h>
#include <DHT.h>
#define DHTPIN D4
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
float h;
float t;
void setup() 
{
  Serial.begin(115200);
  dht.begin();
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
}
