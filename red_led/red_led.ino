int REDLED = 9;

void setup() {
  // put your setup code here, to run once:
  
    pinMode(REDLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(REDLED,HIGH);
  delay(1000);
  analogWrite(REDLED,LOW);
  delay(1000);

}
