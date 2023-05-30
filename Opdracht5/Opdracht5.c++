int sensorPin = 0;
 
void setup()
{
  Serial.begin(9600);
}
 

 /**
* Tempratuur senzor
* @param Map gebruiken
* @return Tempratuur
* @author Rick Wijkmans
* @author Gaf als tip dat ik een map moet gebruiken werkt beter en efficenter.
*/
void loop()
{
 
 int reading = analogRead(sensorPin);
 Serial.print(map(reading, 0 ,1023, 0, 500));
 Serial.println(" C");
 
 delay(1000);
}
