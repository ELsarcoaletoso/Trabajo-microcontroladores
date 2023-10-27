const int dipSwitch[] = {11, 10, 9, 8};
const int LED1 = 7;  
const int LED2 = 6;  
const int LED3 = 5;  

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(dipSwitch[i], INPUT);
  }
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() 
{
  int switchState[4];

  for (int i = 0; i < 4; i++) 
  {
    switchState[i] = digitalRead(dipSwitch[i]);
  }


  if (switchState[3] == HIGH && switchState[2] == HIGH && switchState[1] == LOW && switchState[0] == LOW) 
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  }
  else if (switchState[3] == HIGH && switchState[2] == HIGH && switchState[1] == LOW && switchState[0] == HIGH)
  {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  }
  else if (switchState[3] == HIGH && switchState[2] == HIGH && switchState[1] == HIGH && switchState[0] == LOW)
  {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  }
  else if (switchState[3] == HIGH && switchState[2] == HIGH && switchState[1] == HIGH && switchState[0] == HIGH)
  {
    digitalWrite (LED1, LOW);
    digitalWrite (LED2, LOW);
    digitalWrite (LED3, HIGH);
  } 
  else if (switchState[3] == HIGH && switchState[2] == LOW && switchState[1] == LOW && switchState[0] == LOW)
  {
    digitalWrite (LED1, HIGH);
    digitalWrite (LED2, LOW);
    digitalWrite (LED3, LOW);
  } 
  else if (switchState[3] == HIGH && switchState[2] == LOW && switchState[1] == LOW && switchState[0] == HIGH)
  {
    digitalWrite (LED1, LOW);
    digitalWrite (LED2, LOW);
    digitalWrite (LED3, HIGH);
  } 
  else if (switchState[3] == HIGH && switchState[2] == LOW && switchState[1] == HIGH && switchState[0] == LOW) 
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
  }
  else if (switchState[3] == HIGH && switchState[2] == LOW && switchState[1] == HIGH && switchState[0] == HIGH) 
  {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
  }
  else if (switchState[3] == LOW && switchState[2] == HIGH && switchState[1] == LOW && switchState[0] == LOW) 
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  }
  else if (switchState[3] == LOW && switchState[2] == HIGH && switchState[1] == LOW && switchState[0] == HIGH) 
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
  }
  else if (switchState[3] == LOW && switchState[2] == HIGH && switchState[1] == HIGH && switchState[0] == LOW) 
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
  }
  else if (switchState[3] == LOW && switchState[2] == HIGH && switchState[1] == HIGH && switchState[0] == HIGH) 
  {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
  }
  else if (switchState[3] == LOW && switchState[2] == LOW && switchState[1] == LOW && switchState[0] == LOW) 
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
  }
   else if (switchState[3] == LOW && switchState[2] == LOW && switchState[1] == LOW && switchState[0] == HIGH) 
  {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
  }
   else if (switchState[3] == LOW && switchState[2] == LOW && switchState[1] == HIGH && switchState[0] == LOW) 
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
  }
  
   else if (switchState[3] == LOW && switchState[2] == LOW && switchState[1] == HIGH && switchState[0] == HIGH) 
  {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
  }
}
