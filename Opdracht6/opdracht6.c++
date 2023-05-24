int delay_time = 1;

void setup()
{
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
}
 
void loop()
{
  for (int colorValue = 0; colorValue < 256; colorValue++) {
    analogWrite(10, colorValue);  
    analogWrite(6, colorValue);   
    analogWrite(3, colorValue); 
    delay(delay_time);
  }
}
