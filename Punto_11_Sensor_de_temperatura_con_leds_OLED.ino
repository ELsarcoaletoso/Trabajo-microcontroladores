#include <DHT.h>
#include <DHT_U.h>
#include <DHT.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define DHTPIN D4
#define DHTTYPE DHT11
#define alto 64
#define largo 128
#define OLED_RESET 0
Adafruit_SSD1306 oled(largo, alto, &Wire, OLED_RESET);

DHT dht(DHTPIN, DHTTYPE);

float h;
float t;
void setup() 
{
 Wire.begin();
 oled.begin(SSD1306_SWITCHCAPVCC, 0x3c);
 oled.clearDisplay();
 Serial.begin(115200);
 dht.begin();
 pinMode(D8,OUTPUT);
 pinMode(D7,OUTPUT);
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
  
  oled.clearDisplay();
  oled.setTextSize(1);
  oled.setTextColor(WHITE);
  oled.setCursor(35, 30);
  oled.print("hum:");
  oled.print(h);
  oled.setTextSize(1);
  oled.setCursor(30, 40);
  oled.println("%");
  oled.print("temp:");
  oled.print(t);
  oled.println("°C");
  oled.display();

  Serial.print("humedad:");
  Serial.print(h);
  Serial.println("%\t");
  Serial.print("temperatura:");
  Serial.print(t);
  Serial.println("°C\t");  

if (dht.readTemperature() >27) 
{
   digitalWrite(D7, HIGH);
 } else {
   digitalWrite(D7, LOW);
 }

 if (dht.readHumidity() >50) 
 {
   digitalWrite(D8, HIGH);
 } else {
   digitalWrite(D8, LOW);
 }
}
