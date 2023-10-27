#define LEDrojo 5
#define LEDamarillo 6
#define LEDverde 7
#define POTENCIOMETRO A0

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(POTENCIOMETRO, INPUT);
  pinMode(LEDrojo, OUTPUT);
  pinMode(LEDamarillo, OUTPUT);
  pinMode(LEDverde, OUTPUT);
}

void loop() {
  bool swi1, swi2;
  swi1 = digitalRead(8);
  swi2 = digitalRead(9);
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
      delay(1000);

      digitalWrite(LEDrojo, LOW);
      digitalWrite(LEDamarillo, LOW);
      digitalWrite(LEDverde, HIGH);
      delay(3000);

      digitalWrite(LEDrojo, LOW);
      digitalWrite(LEDverde, LOW);
      digitalWrite(LEDamarillo, HIGH);
      delay(1000);
  }
  if(swi1==0 && swi2==1){
   digitalWrite(LEDrojo, LOW);
   digitalWrite(LEDverde, LOW);
    digitalWrite(LEDamarillo, HIGH);
      delay(500);
      digitalWrite(LEDamarillo, LOW);
      delay(500);
  }
  else{
   digitalWrite(LEDrojo, LOW);
   digitalWrite(LEDverde, LOW);
   digitalWrite(LEDamarillo,LOW);
  }
}
    