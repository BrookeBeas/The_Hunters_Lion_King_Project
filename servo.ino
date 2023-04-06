#include <Servo.h>

//Limited to 4 servos
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int buttonPin4 = 5;
const int buttonPin5 = 6;

void setup() {
  
  myservo1.attach(8);
  myservo2.attach(9);
  myservo3.attach(10);
  myservo4.attach(11);

  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
}

boolean done1 = false;
boolean done2 = false;
boolean done3 = false;

void loop() {
  if (digitalRead(buttonPin1) == HIGH) {
    myservo1.write(90);
    done1 = true;
  } else {
    myservo1.write(0);
  }
  if (done1 == true) {
    if (digitalRead(buttonPin2) == HIGH) {
      myservo2.write(90);
      done2 = true;
    } else {
      myservo2.write(0);
    }
  }
  if (done2 == true) {
    if (digitalRead(buttonPin3) == HIGH) {
      myservo3.write(90);
      done3 = true;
    } else {
      myservo3.write(0);
    }
  }
  if (done3 == true) {
    if (digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == HIGH) {
      myservo4.write(90);
    } else {
      myservo4.write(0);
    }
  }
}
