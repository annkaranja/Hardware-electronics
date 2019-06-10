int redPin = 11;
int greenPin = 10;
int bluePin = 6;
int brightness = 255;
String colorChoice;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("What color would you like the LED?(red,green,blue,cyan,yellow or purple)");
  while (Serial.available ()==0) { }
  colorChoice = Serial.readString();

  if (colorChoice == "red") {
    analogWrite(redPin,brightness);
    analogWrite(greenPin,0);
    analogWrite(bluePin,0);
    }
    
  if (colorChoice == "blue") {
    analogWrite(redPin,0);
    analogWrite(greenPin,0);
    analogWrite(bluePin,brightness);
    } 
    
  if (colorChoice == "green") {
    analogWrite(redPin,0);
    analogWrite(greenPin,brightness);
    analogWrite(bluePin,0);
    } 

   if (colorChoice == "yellow") {
    analogWrite(redPin,brightness);
    analogWrite(greenPin,brightness);
    analogWrite(bluePin,0);
    }
    
  if (colorChoice == "purple") {
    analogWrite(redPin,brightness);
    analogWrite(greenPin,0);
    analogWrite(bluePin,brightness);
    } 
    
  if (colorChoice == "cyan") {
    analogWrite(redPin,0);
    analogWrite(greenPin,brightness);
    analogWrite(bluePin,brightness);
    } 
 
  if (colorChoice!="red" && colorChoice!="green" && colorChoice!="blue" && colorChoice!="yellow" && colorChoice!="purple" && colorChoice!="cyan") {
    Serial.println("That is not a valid color choice, please try again");
    Serial.println(""); 
  }
}
