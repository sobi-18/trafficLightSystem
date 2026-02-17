int red = 13;
int blue = 12;   
int green = 11;
int buzzer = 8;

unsigned long previousMillis = 0;
int state = 0;

void setup() 
{
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzer, OUTPUT);

  digitalWrite(green, HIGH);  
}

void loop() {

  unsigned long currentMillis = millis();

  switch(state) {

   
    case 0:
      if (currentMillis - previousMillis >= 5000) {
        digitalWrite(green, LOW);
        digitalWrite(blue, HIGH);
        previousMillis = currentMillis;
        state = 1;
      }
      break;

   
    case 1:
      if (currentMillis - previousMillis >= 2000) {
        digitalWrite(blue, LOW);
        digitalWrite(red, HIGH);
        previousMillis = currentMillis;
        state = 2;
      }
      break;

    case 2:
      if (currentMillis - previousMillis <= 3000) {
        tone(buzzer, 1000);   // slow beep
      }
      else if (currentMillis - previousMillis <= 5000) {
        tone(buzzer, 1500);   // fast beep
      }
      else {
        noTone(buzzer);
        digitalWrite(red, LOW);
        digitalWrite(green, HIGH);
        previousMillis = currentMillis;
        state = 0;
      }
      break;
  }
}
