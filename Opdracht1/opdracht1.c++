int delay_time = 1000;

void setup()
{
	pinMode(11, OUTPUT);
  	pinMode(12, OUTPUT);

}

void loop() 
{
  digitalWrite(11,HIGH); 
  delay(delay_time);
  digitalWrite(11,LOW); 
  delay(delay_time);

  digitalWrite(12,HIGH); 
  delay(delay_time);
  digitalWrite(12,LOW); 
  delay(delay_time);
}