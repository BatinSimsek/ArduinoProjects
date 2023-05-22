int button = 2;
int led = 11;
int delay_time = 50;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  
  if (digitalRead(button) == HIGH) {
    delay(delay_time);
    digitalWrite(led, !digitalRead(led));
    delay(delay_time);
  }
}