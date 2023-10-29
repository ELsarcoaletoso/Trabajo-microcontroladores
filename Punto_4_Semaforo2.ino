#define LEDrojo 7
#define LEDamarillo 6
#define LEDverde 5
#define POTENCIOMETRO A0

void setup() {
  Serial.begin(9600);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  pinMode(POTENCIOMETRO, INPUT);
  pinMode(LEDrojo, OUTPUT);
  pinMode(LEDamarillo, OUTPUT);
  pinMode(LEDverde, OUTPUT);
}

void loop() {
  bool swi1, swi2;
  swi1 = digitalRead(11);
  swi2 = digitalRead(10);
int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(1);
  int potValue = analogRead(POTENCIOMETRO);


  if (swi1 == 1 && swi2 == 0) {
     digitalWrite(LEDrojo, HIGH);
      digitalWrite(LEDamarillo, LOW);
      digitalWrite(LEDverde, LOW);
      delay(sensorValue);

      digitalWrite(LEDrojo, HIGH);
      digitalWrite(LEDamarillo, HIGH);
      digitalWrite(LEDverde, LOW);
      delay(sensorValue*1000);

      digitalWrite(LEDrojo, LOW);
      digitalWrite(LEDamarillo, LOW);
      digitalWrite(LEDverde, HIGH);
      delay(sensorValue*3000);

      digitalWrite(LEDrojo, LOW);
      digitalWrite(LEDverde, LOW);
      digitalWrite(LEDamarillo, HIGH);
      delay(sensorValue*1000);
  }
  if(swi1==0 && swi2==1){
   digitalWrite(LEDrojo, LOW);
   digitalWrite(LEDverde, LOW);
    digitalWrite(LEDamarillo, HIGH);
      delay(sensorValue*500);
      digitalWrite(LEDamarillo, LOW);
      delay(sensorValue*500);
  }
  else{
   digitalWrite(LEDrojo, LOW);
   digitalWrite(LEDverde, LOW);
   digitalWrite(LEDamarillo,LOW);
  }
}
    
