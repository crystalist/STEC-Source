// train dcc 

#define DCC_DIR		9  // Arduino pin for DCC direction control 
                      // this pin is connected to "DIRECTION" of LMD18200
					  // it controls which output will be used to send PWM
					  // for detail see http://www.ti.com/lit/ds/symlink/lmd18200.pdf
#define DCC_PWM		10  // Arduino pin for DCC PWM encoding control
                      // connected to "PWM in" of LMD18200
#define DCC_BRAKE	11 // Arduino pin for DCC brake
						// usually LOW


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("Started\n");
  // put your setup code here, to run once:
	// set Pin mode and initial value
  pinMode(DCC_DIR, OUTPUT);   // DCC signal for direction
  digitalWrite(DCC_DIR, HIGH);
  
  pinMode(DCC_PWM, OUTPUT);   // DCC signal for PWM
  digitalWrite(DCC_PWM,LOW);
  analogWrite(DCC_PWM, 127);
  pinMode(DCC_BRAKE, OUTPUT);
  digitalWrite(DCC_BRAKE,LOW);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10);

  
}
