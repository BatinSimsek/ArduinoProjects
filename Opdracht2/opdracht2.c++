int delay_time = 250;
int ledPins[]={12,10,8,7,5,3,1,0};

void setup()
{
  for (int i =0; i <8; i++)
  {
    pinMode(ledPins[i],OUTPUT);
  }
}

void loop() 
{
  int i = 0;
  while (i<7)
  {
    {
      digitalWrite(ledPins[i],HIGH);
      delay(delay_time);
      digitalWrite(ledPins[i],LOW);
      i++;
    }
  }

  i = 7;
  while (i >0)
  {
    digitalWrite(ledPins[i],HIGH);
    delay(delay_time);
    digitalWrite(ledPins[i],LOW);
    i--;
  }
}