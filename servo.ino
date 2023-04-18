#include <Servo.h>

//Using 3 servos with 4 buttons
Servo myservo1;
Servo myservo2;
Servo myservo3;

const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int buttonPin4 = 5;

void setup() {

  myservo1.attach(8);
  myservo2.attach(9);
  myservo3.attach(10);

  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);

  //Setup servo angles to prevent other servos from rotating.
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
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
      myservo3.write(180);
      done3 = true;
    }
  }
  if (done3 == true) {
    if (digitalRead(buttonPin4) == HIGH) {
      myservo3.write(180);
    } else {
      myservo3.write(0);
    }
  }
}
