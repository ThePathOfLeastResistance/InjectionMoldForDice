#include <Servo.h>

Servo moldservo;
Servo glueservo;
Servo mount1servo;
Servo mount2servo;
Servo baseservo;
Servo armservo;

int mot = 13;

void setup() {
  moldservo.attach(3);
  glueservo.attach(5);
  mount1servo.attach(6);
  mount2servo.attach(11);
  baseservo.attach(9);
  armservo.attach(10);
  pinMode(mot, OUTPUT);
}

void loop() {



//  Lock the model in,
  moldservo.write(180);
  baseservo.write(90);  // TODO: need to figure out the right value    
  delay(2000);

//  Move down the platform
  mount1servo.write(0);
  mount2servo.write(0);
  delay(3000);        

//Inject the model with Hot glue
  glueservo.write(180);
  delay(2000);

//wait 10 seconds for the hot glue to cool
  delay(12000);

// move the platform up 
  mount1servo.write(180);
  mount2servo.write(180);
  delay(2000);
  
//Reset the model 
  moldservo.write(0);
  glueservo.write(0);
  delay(2000);  

// Move the model away to the other station
  armservo.write(90);
  baseservo.write(90); 

  delay(2000);

  
}
