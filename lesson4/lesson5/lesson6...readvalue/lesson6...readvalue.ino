
int pinpot = A0;
int LED =  10;
int ReadValue;
float WriteValue;




void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(pinpot,INPUT);
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
ReadValue = analogRead(pinpot);
WriteValue =(255./1023.)*ReadValue;
analogWrite(LED,WriteValue);
delay(1000);



}
