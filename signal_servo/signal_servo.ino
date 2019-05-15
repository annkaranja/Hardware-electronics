
int BLUELED = 5;
int REDLED = 10;
int PIR = 11;
int SERVO = 3;
int motion;

void setup() {
  // put your setup code here, to run once:
pinMode(REDLED,OUTPUT);
pinMode(BLUELED,OUTPUT);
pinMode(PIR,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

 motion=digitalRead(PIR);
 if( motion == HIGH){
  for(int j=1; j<=10;j=j+1){
  digitalWrite(REDLED,HIGH);
  delay(1000);
  digitalWrite(REDLED,LOW);
  delay(1000);
  }
  }
  
 
  else{
   digitalWrite(BLUELED,HIGH);
   delay(1000);
   digitalWrite (BLUELED,LOW);
   delay(1000);
   
}
 }

