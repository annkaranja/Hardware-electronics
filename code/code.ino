
int REDLED = 4;
int GREENLED = 7;
int BLINKRED;
int BLINKGREENLED;
int timeonREDLED;
int timeoffREDLED;
int timeonGREENLED;
int timeoffGREENLED;

void setup() {

              Serial.begin(9600);
              pinMode(REDLED,OUTPUT);
              pinMode(GREENLED,OUTPUT);
              Serial.println("This is my blinking program");
              Serial.println(" ");

              Serial.println( "how many red blinks" );
              Serial.println(" ");
              while (Serial.available() ==0) {};
              BLINKRED = Serial.parseInt();
              Serial.println(" ");
              
              Serial.println("how many Green Blinks ?");
              Serial.println(" ");
              while (Serial.available() ==0) {};
              BLINKGREENLED = Serial.parseInt();
              Serial.println(" ");

               
              Serial.println("how long does red take to go on?");
              Serial.println(" ");
              while (Serial.available() ==0) {};
              timeonREDLED = Serial.parseInt();
              Serial.println(" ");
              
              Serial.println("how long does green take to go on ?");
              Serial.println(" ");
              while (Serial.available() ==0) {};
              timeonGREENLED = Serial.parseInt();
              Serial.println(" ");
               

              Serial.println("how long does red take to go off?");
              Serial.println(" ");
              while (Serial.available() ==0) {};
              timeoffREDLED = Serial.parseInt();
              Serial.println(" ");

              Serial.println("how long does green take to go off ?");
              Serial.println(" ");
              while (Serial.available() ==0) {};
              timeoffsssGREENLED = Serial.parseInt();
              Serial.println(" ");
 
 
 
  // put your setup code here, to run once:

             }

void loop() {
  // put your main code here, to run repeatedly:


             for(int j = 1; j<=BLINKRED; j=j+1) 
             {

             Serial.print("REDLED blinking #");
             Serial.println(j);
            
             digitalWrite(REDLED,HIGH);
             delay(timeonREDLED);
              
             digitalWrite(REDLED,LOW);
             delay(timeoffREDLED);
             
             }
          
             Serial.print(" ");

             for (int k=1; k<=BLINKGREENLED; k=k+1)
             { 
     
             Serial.println("GREENLED is blinking # ");
             Serial.print(k);
             digitalWrite(GREENLED,HIGH);
             delay(timeonGREENLED);
             digitalWrite(GREENLED,LOW);
             delay(timeoffGREENLED);
     
     
             }
             
             
             }
