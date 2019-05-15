int pinpot = A0;
int REDLED = 10;
float WriteValue;
float ReadValue;
float voltage;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinpot,INPUT);
  pinMode(REDLED,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int ReadValue; 
  ReadValue=analogRead(pinpot);
  WriteValue = (225/1023);
  voltage = (5./1023);
  analogWrite(REDLED,WriteValue);
   delay(ReadValue);


  Serial.print("typeValue");
  Serial.print(ReadValue);
  Serial.print(" ");
  Serial.print("maped Value");
  Serial.print(" ");
  Serial.print(WriteValue);
  Serial.print(" ");
  Serial.print(voltage);
  Serial.print(REDLED,HIGH);
  delay(ReadValue);
  digitalWrite(REDLED,LOW);
  delay(ReadValue);
  
}
