int REDLED = 4;
int GREENLED = 7;
int blinknumberREDLED=6;
int blinknumberGREENLED=8;



void setup() {

  // put your setup code here, to run once:
Serial.begin(9600);
Serial.print("This is my first code");

pinMode(REDLED,OUTPUT);
pinMode(GREENLED,OUTPUT);
}

void loop() {

for(int j=1;  j<=blinknumberREDLED; j=j+1)


{
 
  Serial.println("this is theREDLED blinking");
  Serial.println(j);
  digitalWrite(REDLED,HIGH);
  delay(1000);
  digitalWrite(REDLED,LOW);
  delay(1000);
  
  }

for(int j=1; j=blinknumberGREENLED; j=j+1) 
{
  Serial.println("This is my GREENLED blinking");
  Serial.println(j);
 
  digitalWrite(GREENLED,HIGH);
  delay(1000); 
  digitalWrite(GREENLED,LOW);
  delay(1000); 
  
  
}
  
  // put your main code here, to run repeatedly:

}
