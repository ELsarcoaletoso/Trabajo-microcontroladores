// los valores son 25 como minimo 541 como medio y 1000 como maximo.
#define POTENCIOMETRO A0
#define LED_AZUL D7
#define LED_ROJO D8
#define LED_INTERNO D4

void setup() {
 pinMode(LED_AZUL, OUTPUT);
 pinMode(LED_ROJO, OUTPUT);
 pinMode(LED_INTERNO, OUTPUT);
 pinMode(POTENCIOMETRO, INPUT);
 Serial.begin(9600);
}

void loop() {
 int sensorValue = analogRead(POTENCIOMETRO);
 Serial.println(sensorValue); 

 int mitad = 541;
 int maximo = 1000;
 int minimo = 25;

 if (sensorValue <= minimo) {
   digitalWrite(LED_AZUL, HIGH);
   digitalWrite(LED_ROJO, HIGH);
   digitalWrite(LED_INTERNO, LOW);
   delay(500);
   digitalWrite(LED_AZUL, LOW);
   digitalWrite(LED_ROJO, LOW);
   digitalWrite(LED_INTERNO, HIGH);
   delay(500);
 }
 if (sensorValue >= mitad) {
   digitalWrite(LED_ROJO, HIGH);
 } else {
   digitalWrite(LED_ROJO, LOW);
 }
 
 if (sensorValue <= mitad && sensorValue > minimo) {
   digitalWrite(LED_INTERNO, HIGH);
   delay(500);
   digitalWrite(LED_INTERNO, LOW);
   delay(500);
   digitalWrite(LED_AZUL, LOW);
   } else {
   digitalWrite(LED_ROJO, LOW);
 }
 if (sensorValue <= maximo) {
    digitalWrite(LED_ROJO, HIGH);
    digitalWrite(LED_AZUL,LOW);
   
 } else {
   digitalWrite(LED_AZUL, HIGH);
 }

}
