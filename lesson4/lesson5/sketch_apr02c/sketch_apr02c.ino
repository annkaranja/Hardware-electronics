
int pinpot = A0;
void setup() {

  Serial.begin(9600);
  pinMode(pinpot,INPUT) ;
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int ReadValue;
   ReadValue = AnalogRead(pinpot);
   serial.printIn(ReadValue);
   delay(1000);

}
