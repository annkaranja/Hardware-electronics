#include <LiquidCrystal.h> 
LiquidCrystal lcd(7,8,9,10,11,12);
int pinpot = A0;
float duration;
float distance;

int echoPin = 3;
int trigPin = 2;

void setup() {
  lcd.begin(16,2);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.clear(); 
   
}

void loop(){
 

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  

  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2)*0.0343;
  
  
    lcd.setCursor(0,0);
    lcd.print("value1= ");
    lcd.print(analogRead(distance));
    lcd.print("   ");
  }
  
//  {
//    lcd.setCursor(0,0);
//    lcd.print("value 1=");
//    lcd.print("analogRead(pinpot)");
//    lcd.setCursor(0,2);
//  }  



