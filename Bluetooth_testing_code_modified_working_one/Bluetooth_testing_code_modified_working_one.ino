# include <SoftwareSerial.h>



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial1.begin(9600);

  Serial.println("Bluetooth test started");
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial1.available())
  {
    // Serial.print("Received byte: ");
    
    char c = Serial1.read();

    Serial.println(c);

    // note for char comparision use '' but not "" ok
    if(c == 'w') {Serial.println("Forward");}
    if(c == 'b') {Serial.println("Backward");}
    if(c == 'l') {Serial.println("Left");}
    if(c == 'r') {Serial.println("Right");}
    if(c == 's') {Serial.println("Stop");}

  }
}
