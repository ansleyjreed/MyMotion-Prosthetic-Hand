#include <Servo.h>

Servo myServo1;
// Servo myServo2;
// Servo myServo3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
myServo1.attach(3);
// myServo2.attach(5);
// myServo3.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
  int reading = analogRead(0);
  Serial.println(reading);
  if (reading > 200){
  myServo1.write(120);
  // myServo2.write(120);
  // myServo3.write(120);
  //delay(1000);
  }
  else {
  myServo1.write(0);
  //   myServo2.write(0);
  // myServo3.write(0);

   delay(1000);
  }

  
}
