#include <Servo.h>

Servo moldservo;
Servo glueservo;
Servo mount1servo;
Servo mount2servo;
Servo baseservo;
Servo armservo;

void setup() {
  moldservo.attach(3);
  glueservo.attach(5);// attaches the servo on pin 9 to the servo object
  mount1servo.attach(6);//
  mount2servo.attach(11);// 
  baseservo.attach(9);// 
  armservo.attach(10);// 
  
}

void loop() {
  mount1servo.write(180);
  mount2servo.write(180);

  delay(2000);        // waits for the servo to reach the position
  mount1servo.write(10);
  mount2servo.write(10);
  delay(2000);        // waits for the servo to reach the position

  moldservo.write(180);  // sets the servo position according to the scaled value
  delay(12000);
  // the move it down 
  glueservo.write(180);
  
  moldservo.write(0);
  glueservo.write(0);// sets the servo back to the starting position
  delay(12000);        // waits for the servo to reach the position
}
