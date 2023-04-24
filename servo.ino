#include <Servo.h>

//Using 4 servos with 4 buttons
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int buttonPin4 = 5;

boolean done1 = false;
boolean done2 = false;
boolean done3 = false;

void setup() {

  Serial.begin(9600);

  myservo1.attach(8);
  myservo2.attach(9);
  myservo3.attach(10);
  myservo4.attach(11);

  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);

  //Setup servo angles to prevent other servos from rotating.
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
}

void loop() {
  if (digitalRead(buttonPin1) == HIGH) {
    myservo1.write(90);
    myservo2.write(90);
    done1 = true;
  } else {
    myservo1.write(0);
    myservo2.write(0);
  }
  if (done1 == true) {
    if (digitalRead(buttonPin2) == HIGH) {
      myservo3.write(90);
      done2 = true;
    } else {
      myservo3.write(0);
    }
  }
  if (done2 == true) {
    Serial.print(digitalRead(buttonPin3));
    Serial.println(digitalRead(buttonPin4));
    if (digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == LOW) {
      myservo4.write(180);
    }else if (digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH){
      myservo4.write(0);
    }
  }
}
