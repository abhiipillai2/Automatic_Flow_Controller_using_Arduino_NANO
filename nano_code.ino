#define tankInput1 3
int inpuutValue1;

#define tankInput2 5
int inputValue2;

#define motorOutput 7

#define ledPin 9

void setup() {
Serial.begin(9600);
  pinMode(tankInput1,INPUT);
  pinMode(tankInput2,INPUT);
  pinMode(motorOutput,OUTPUT);
  pinMode(ledPin,OUTPUT);
  digitalWrite(tankInput1,LOW);
  digitalWrite(tankInput2,LOW);
  digitalWrite(motorOutput,LOW);
  digitalWrite(ledPin,LOW);
}

void loop() {
  
   inpuutValue1 = digitalRead(tankInput1);
   inputValue2 = digitalRead(tankInput2);

      if(inpuutValue1 == HIGH && inputValue2 == HIGH)
      {
        digitalWrite(motorOutput,HIGH);
        digitalWrite(LED_BUILTIN,HIGH);
        Serial.println("motor is ON");
      }
      else if(inpuutValue1 == LOW && inputValue2 == LOW)
      {
        digitalWrite(motorOutput,LOW);
        digitalWrite(LED_BUILTIN,LOW);
        Serial.println("motor is OFF");
      }
      delay(1000);
}
