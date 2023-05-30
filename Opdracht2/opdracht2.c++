// een time delay
int delay_time = 250;
//stop pins in array
int ledPins[]={12,10,8,7,5,3,1,0};

void setup()
{
    // De pinnen van de LED's instellen die in de arrays staan
  for (int i =0; i <8; i++)
  {
    pinMode(ledPins[i],OUTPUT);
  }
}

void loop() 
{
  int i = 0;
    // Lus om de LED's van 0 tot 6 aan te zetten
  while (i<7)
  {
    {
      // LED i inschakelen
      digitalWrite(ledPins[i],HIGH);
      // Wachten volgens de ingestelde vertragingstijd
      delay(delay_time);
      // LED i uitschakelen
      digitalWrite(ledPins[i],LOW);
      // Naar de volgende led in de loop
      i++;
    }
  }

  i = 7;
  // Lus om de LED's van 7 tot 1 aan te zetten
  while (i >0)
  {
    // LED i inschakelen
    digitalWrite(ledPins[i],HIGH);
    // Wachten volgens de ingestelde vertragingstijd
    delay(delay_time);
    // LED i uitschakelen
    digitalWrite(ledPins[i],LOW);
    // Naar de volgende LED gaan in de loop
    i--;
  }
}