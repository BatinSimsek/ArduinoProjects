int delay_time = 1;

void setup()
{
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
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
  for (int redValue = 0; redValue < 256; redValue++) {
	for (int blueValue = 0; blueValue < 256; blueValue++) {
 	  for (int greenValue = 0; greenValue < 256; greenValue++) {
 	    analogWrite(10, redValue);  
   		 analogWrite(6, blueValue);   
    	analogWrite(3, greenValue); 
    	delay(delay_time);
 	 }
  	}
  }
}
