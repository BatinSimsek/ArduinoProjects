// Pinnummer knop
int button = 2;
// Pinnummer voor de LED
int led = 11;
// Vertragingstijd
int delay_time = 50;

void setup() {
  // LED-pin instellen als uitvoer
  pinMode(led, OUTPUT);
  // Knop-pin instellen als invoer
  pinMode(button, INPUT);
}

void loop() {
  // Wacht voor de opgegeven vertragingstijd
  delay(delay_time);

  //als knop ingedrukt is zet aan en als het nog is ingedrukt is uit
  if (digitalRead(button) == HIGH) {
    delay(delay_time);
    // Schakel de LED om (AAN als UIT )
    digitalWrite(led, !digitalRead(led));
    delay(delay_time);
  }   
  // Wacht voor de opgegeven vertragingstijd
  delay(delay_time);

}