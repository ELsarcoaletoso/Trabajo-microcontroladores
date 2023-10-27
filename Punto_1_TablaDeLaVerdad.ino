const int dipSwitch[] = {11, 10, 9, 8};
const int outputLED1 = 7;  
const int outputLED2 = 6;  
const int outputLED3 = 5;  

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(dipSwitch[i], INPUT);
  }
  pinMode(outputLED1, OUTPUT);
  pinMode(outputLED2, OUTPUT);
  pinMode(outputLED3, OUTPUT);
}

void loop() {
  int switchState[4];

  for (int i = 0; i < 4; i++) {
    switchState[i] = digitalRead(dipSwitch[i]);
  }

  if (switchState[0] == HIGH && switchState[1] == HIGH && switchState[2] == HIGH && switchState[3] == HIGH) {
    digitalWrite(outputLED1, HIGH);
    digitalWrite(outputLED2, HIGH);
    digitalWrite(outputLED3, HIGH);
  } else if (switchState[0] == HIGH && switchState[1] == HIGH && switchState[2] == HIGH && switchState[3] == LOW) {
    digitalWrite(outputLED1, HIGH);
    digitalWrite(outputLED2, LOW);
    digitalWrite(outputLED3, HIGH);
  } else if (switchState[0] == HIGH && switchState[1] == HIGH && switchState[2] == LOW && switchState[3] == HIGH) {
    digitalWrite(outputLED1, HIGH);
    digitalWrite(outputLED2, LOW);
    digitalWrite(outputLED3, HIGH);
  } else if (switchState[0] == HIGH && switchState[1] == HIGH && switchState[2] == LOW && switchState[3] == LOW) {
    digitalWrite(outputLED1, LOW);
    digitalWrite(outputLED2, LOW);
    digitalWrite(outputLED3, HIGH);
  } else if (switchState[0] == HIGH && switchState[1] == LOW && switchState[2] == HIGH && switchState[3] == HIGH) {
    digitalWrite(outputLED1, HIGH);
    digitalWrite(outputLED2, LOW);
    digitalWrite(outputLED3, HIGH);
  }else if (switchState[0] == HIGH && switchState[1] == LOW && switchState[2] == HIGH && switchState[3] == LOW) {
    digitalWrite(outputLED1, LOW);
    digitalWrite(outputLED2, LOW);
    digitalWrite(outputLED3, HIGH);
  }else if (switchState[0] == HIGH && switchState[1] == LOW && switchState[2] == LOW && switchState[3] == HIGH) {
    digitalWrite(outputLED1, LOW);
    digitalWrite(outputLED2, LOW);
    digitalWrite(outputLED3, HIGH);
  }else if (switchState[0] == HIGH && switchState[1] == LOW && switchState[2] == LOW && switchState[3] == LOW) {
    digitalWrite(outputLED1, LOW);
    digitalWrite(outputLED2, LOW);
    digitalWrite(outputLED3, LOW);
  }else if (switchState[0] == LOW && switchState[1] == HIGH && switchState[2] == HIGH && switchState[3] == HIGH) {
    digitalWrite(outputLED1, HIGH);
    digitalWrite(outputLED2, LOW);
    digitalWrite(outputLED3, HIGH);
  }else if (switchState[0] == LOW && switchState[1] == HIGH && switchState[2] == HIGH && switchState[3] == LOW) {
    digitalWrite(outputLED1, LOW);
    digitalWrite(outputLED2, LOW);
    digitalWrite(outputLED3, HIGH);
  }else if (switchState[0] == LOW && switchState[1] == HIGH && switchState[2] == LOW && switchState[3] == HIGH) {
    digitalWrite(outputLED1, LOW);
    digitalWrite(outputLED2, LOW);
    digitalWrite(outputLED3, HIGH);
  }else if (switchState[0] == LOW && switchState[1] == HIGH && switchState[2] == LOW && switchState[3] == LOW) {
    digitalWrite(outputLED1, HIGH);
    digitalWrite(outputLED2, LOW);
    digitalWrite(outputLED3, LOW);
  }else if (switchState[0] == LOW && switchState[1] == LOW && switchState[2] == HIGH && switchState[3] == HIGH) {
    digitalWrite(outputLED1, LOW);
    digitalWrite(outputLED2, LOW);
    digitalWrite(outputLED3, HIGH);
  }else if (switchState[0] == LOW && switchState[1] == LOW && switchState[2] == HIGH && switchState[3] == LOW) {
    digitalWrite(outputLED1, HIGH);
    digitalWrite(outputLED2, LOW);
    digitalWrite(outputLED3, LOW);
  }else if (switchState[0] == LOW && switchState[1] == LOW && switchState[2] == LOW && switchState[3] == HIGH) {
    digitalWrite(outputLED1, HIGH);
    digitalWrite(outputLED2, LOW);
    digitalWrite(outputLED3, LOW);
  }else {
    digitalWrite(outputLED1, LOW);
    digitalWrite(outputLED2, LOW);
    digitalWrite(outputLED3, LOW);
  }
}