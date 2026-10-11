#include<Serv0.h> 

Servo lift ;
Servo rear;
Servo front;


void setup() {
  // put your setup code here, to run once:

  lift.attach(9);
  rear.attach(10);
  front.attach(11);


  lift.write(90);
  rear.write(90);
  front.write(90);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:

}
