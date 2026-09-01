#include<Servo.h> 
#include<SoftwareSerial.h>

Servo lift ;
Servo rear;
Servo front;


void setup() {
  // put your setup code here, to run once:

  front.attach(4);
  lift.attach(7);
  rear.attach(8);
  


  lift.write(90);
  rear.write(90);
  front.write(90);
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  //step 1 :
  lift.write(120);
  delay(200);

  //step 2 :
  front.write(60);
  rear.write(60);
  delay(200);

  //step 3 :
  lift.write(90);
  delay(200);

  //step 4 :
  lift.write(60);
  delay(200);

  //step 5 :
  front.write(90);
  rear.write(90);
  delay(200);

  //step 6 :
  lift.write(90);
  delay(200);

}
