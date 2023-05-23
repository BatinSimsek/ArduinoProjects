int led[]={13,12,11,10,6,4,2};
int pod;
int leds;

void setup() {

  for (int i =0; i <7;i++)
  {
    pinMode(led[i],OUTPUT);
  }
  
  pinMode(A0, INPUT);
}

void loop() {
  pod = analogRead(A0);
  leds = map(pod, 0, 1023, 0, 255);
  
 for (int i =0; i <7;i++)
  {
	analogWrite(led[i], leds);
  }
}