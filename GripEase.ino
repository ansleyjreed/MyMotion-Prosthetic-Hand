#include <Servo.h>

Servo myServo1;
Servo myServo2;
//button vars
int buttonPin = 2;
boolean buttonState = false;

void setup() {

  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo1.write(0);
  myServo2.write(0);
  pinMode(buttonPin, INPUT);
  myServo1.attach(3);
  myServo2.attach(5);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin); 
  Serial.println(buttonState);

  if(buttonState == true){
      myServo1.write(120);
      myServo2.write(120);
      delay(1000);
      myServo1.write(0);
      myServo2.write(0);
  }
}
