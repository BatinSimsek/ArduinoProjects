// een 1 sec time delay
int delay_time = 1000;


void setup()
{
  //installen van de pinmodus
	pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() 
{
    // Schakel pin 11 HIGH (AAN)
  digitalWrite(11,HIGH); 
    // Wacht voor de opgegeven vertragingstijd
  delay(delay_time);
    // Schakel pin 11 LOW (UIT)
  digitalWrite(11,LOW); 

  // Schakel pin 12 HIGH (AAN)
  digitalWrite(12,HIGH); 
    // Wacht voor de opgegeven vertragingstijd
  delay(delay_time);
    // Schakel pin 12 LOW (UIT)
  digitalWrite(12,LOW); 
}