#include <Servo.h>
Servo myservo;
int ReadValue;
int pinpot = A0;

int redLED=5;
int blueLED=6;

void setup() {
myservo.attach(9);
pinMode(pinpot,INPUT);
pinMode(blueLED,OUTPUT);
pinMode(redLED,OUTPUT);
}

void loop() {
 
    ReadValue = analogRead(pinpot);
    ReadValue = map(ReadValue,0,1023,0,180);
    myservo.write(ReadValue);
    delay (45);

    if (ReadValue >= 0 && <=90){
      digitalWrite(redLED,High);
    }
    else (ReadValue<90){
      digitalWrite(blueLED,High);
    }
  }
