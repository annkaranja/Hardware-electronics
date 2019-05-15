  
#include <Servo.h>
Servo myservo;
int Readvalue;
int PIR = 10;

  void setup() {
 myservo.attach(9);
 pinMode(PIR,INPUT); 

}

void loop() {
 Readvalue = digitalRead(PIR);
 if(Readvalue==HIGH){
  myservo.write(90);
  delay(1000);
 
 }
 else{
  myservo.write(0);
  delay(1000);}  
 }
  
