// Pinnummer voor de tempratuur
int sensorPin = 0;
 
void setup()
{
  // Start de seriele communicatie
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
 // Lees de analoge waarde van de sensor
 int reading = analogRead(sensorPin);
// Converteer de analoge waarde naar een temperatuurwaarde tussen 0 en 500
 Serial.print(map(reading, 0 ,1023, 0, 500));
 // Print de temperatuurwaarde gevolgd door "C" voor Celsius
 Serial.println(" C");
 // Wacht 1 seconde voor de volgende meting
 delay(1000);
}
