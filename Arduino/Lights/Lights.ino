
// the led is connected to pin 9 and ground
int led = 9;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  
  while(Serial.available() == 0);
  
  int val = Serial.read();
  Serial.println(val);
  
  if( val == 1)
  {
     Serial.println("Led ON");
     digitalWrite(led,HIGH); 
  }
  else if( val == 0)
  {
     Serial.println("Led OFF");
     digitalWrite(led,LOW); 
  }
  
}
