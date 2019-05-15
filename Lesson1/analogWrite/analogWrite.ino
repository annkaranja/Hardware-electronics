int REDLED = 5;
int GREENLED = 10;


void setup() {
  // put your setup code here, to run once:

 pinMode(REDLED,OUTPUT);
 pinMode(GREENLED,OUTPUT);
 

}

void loop() {
  // put your main code here, to run repeatedly:

 analogWrite(REDLED,255);
 analogWrite(GREENLED,255);
 delay(1000); 

 analogWrite(REDLED,0);
 analogWrite(GREENLED,0);
 delay(1000); 
}
