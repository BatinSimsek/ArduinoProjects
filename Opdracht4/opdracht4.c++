// Array met pin nummers
int led[]={13,12,11,10,6,4,2};
 // Variabele om de analoge waarde van A0 op te slaan
int pod;
// Variabele om de geconverteerde LED-index op te slaan
int leds;

void setup() {
  // For loop alle pins en instellen als uitvoer
  for (int i =0; i <7;i++)
  {
    pinMode(led[i],OUTPUT);
  }
  // Draai knop instellen als invoer
  pinMode(A0, INPUT);
}

void loop() {
  // Lees de analoge waarde van A0
  pod = analogRead(A0);
  // Converteer de analoge waarde naar een waarde tussen 0 en 7
  leds = map(pod, 0, 1023, 0, 7);
  // Gaat door de for loop of alle pins
 for (int i =0; i <7;i++)
  {
   if(leds > i){
    // Schakel LED i aan als leds groter is dan i
     digitalWrite(led[i], HIGH);
   }
   else{
    // Schakel LED i uit als leds niet groter is dan i
     digitalWrite(led[i], LOW);
   }
  }
}