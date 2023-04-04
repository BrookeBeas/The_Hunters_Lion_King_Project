#include <Servo.h>

Servo myservo1;
const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int buttonPin4 = 5;
const int buttonPin5 = 6;

void setup() {
  myservo1.attach(9);  //attaches the servo on pin 9
  myservo2.attach(10);
  myservo3.attach(11);
  myservo4.attach(12);
  myservo5.attach(13);
  pinMode(buttonPin, INPUT);
}

// initializes booleans 
boolean done1 = false;
boolean done2 = false;
boolean done3 = false;
boolean done4 = false;

void loop() {
  if (digitalRead(buttonPin1) == HIGH) {
    myservo1.write(90);
    done1 = true;
  } else {
    myservo1.write(0);
  }
  if (done1 == true)
  {
     if (digitalRead(buttonPin2) == HIGH) {
     myservo2.write(90);
     done2 = true;
     } 
     else {
      myservo2.write(0);
     }
  }
  if (done2 == true)
  {
     if (digitalRead(buttonPin3) == HIGH) {
     myservo3.write(90);
     done3 = true;
     } 
     else {
      myservo3.write(0);
     }
  }
  if (done3 == true)
  {
     if (digitalRead(buttonPin4) == HIGH) {
     myservo4.write(90);
     done4 = true;
     } 
     else {
      myservo4.write(0);
     }
  }
  if (done4 == true)
  {
     if (digitalRead(buttonPin5) == HIGH) {
     myservo5.write(90);
     done5 = true;
     } 
     else {
      myservo5.write(0);
     }
  }
}
