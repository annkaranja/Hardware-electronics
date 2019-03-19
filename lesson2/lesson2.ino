
int REDLED=4;
int GREENLED=6;


void setup() {
  // put your setup code here, to run once:
pinMode(REDLED,OUTPUT);
pinMode(GREENLED,OUTPUT);

}

void loop() {

for(int j=1;  j<=6; j=j+1){
  digitalWrite(REDLED,HIGH);
  delay(1000);
  digitalWrite(REDLED,LOW);
  delay(1000);
  }

for(int j=1; j=6; j=j+1){
  digitalWrite(GREENLED,HIGH);
  delay(1000); 
  digitalWrite(GREENLED,LOW);
  delay(1000); 
  
  }
  
  // put your main code here, to run repeatedly:

}
