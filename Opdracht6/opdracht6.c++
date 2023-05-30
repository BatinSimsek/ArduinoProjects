// Vertraginstijd
int delay_time = 1;

void setup()
{
  //Pin 10 instellen als uitvoer	
  pinMode(10, OUTPUT);
  //Pin 6 instellen als uitvoer	
  pinMode(6, OUTPUT);
  //Pin 3 instellen als uitvoer	
  pinMode(3, OUTPUT);
}


/**
* Methode voor het RGB kleur
* @param redvalue/bluevalue/redvalue/ Disco kleuren
* @return RGB Kleur
* @author Robbin Sitters
* @author mondelijk een tip gegeven omdat ik een for loop had en gaf aan dat niet ging werken
*/
void loop()
{
	// gaat alle waarde van de rgb over in de loop rood	
  for (int redValue = 0; redValue < 256; redValue++) {
	// gaat alle waarde van de rgb over in de loop blauw
	for (int blueValue = 0; blueValue < 256; blueValue++)
	// gaat alle waarde van de rgb over in de loop groen
	 {
 	  for (int greenValue = 0; greenValue < 256; greenValue++) {
 	    analogWrite(10, redValue);  //stel de rode kleurwaarde
   		 analogWrite(6, blueValue); //stel de blauwe kleurwaarde  
    	analogWrite(3, greenValue); // stel de groene kleurwaarde
    	delay(delay_time); // vertraginstijd
 	 }
  	}
  }
}
