#include <SoftwareSerial.h> 
SoftwareSerial MyBlue(0, 1); // RX | TX 
char val; 
double carSpeed = 255;//left
double carTurn = 249;//right
int m1a = 5;
int m1b = 6;
int m2a = 10;
int m2b = 11  ;

void setup() 
{   
 Serial.begin(9600); 
 MyBlue.begin(9600); 
 Serial.println("Ready to connect\nDefualt password is 1234 or 000"); 
} 
void loop() 
{ 
      while (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }
  

                     
  if( val == 'F') 
    {
      analogWrite(m1a, carSpeed);
      analogWrite(m1b, LOW);
      analogWrite(m2a, carTurn);
      analogWrite(m2b, LOW);  
    }
  else if(val == 'B') // Backward
    {
      analogWrite(m1a, LOW);
      analogWrite(m1b, carSpeed);
      analogWrite(m2a, LOW);
      analogWrite(m2b, carTurn); 
    }
  
    else if(val == 'L') //Left
    {
    analogWrite(m1a, LOW);
    analogWrite(m1b, LOW);
    analogWrite(m2a, carTurn);
    analogWrite(m2b, LOW);
    }
    else if(val == 'R') //Right
    {
    analogWrite(m1a, carSpeed);
    analogWrite(m1b, LOW);
    analogWrite(m2a, LOW);
    analogWrite(m2b, LOW); 
    }
    
  else if(val == 'S') //Stop
    {
    analogWrite(m1a, LOW);
    analogWrite(m1b, LOW);
    analogWrite(m2a, LOW);
    analogWrite(m2b, LOW); 
    }
  else if(val == 'I') //Forward Right
    {
    analogWrite(m1a, 250);
    analogWrite(m1b, LOW);
    analogWrite(m2a, 100);
    analogWrite(m2b, LOW);
    }
  else if(val == 'J') //Backward Right
    {
    analogWrite(m1a, LOW);
    analogWrite(m1b, carSpeed);
    analogWrite(m2a, LOW);
    analogWrite(m2b, LOW);
    }
   else if(val == 'G') //Forward Left
    {
    analogWrite(m1a, 100);
    analogWrite(m1b, LOW);
    analogWrite(m2a, 255);    
    analogWrite(m2b, LOW);
    }
  else if(val == 'H') //Backward Left
    {
    analogWrite(m1a, LOW);
    analogWrite(m1b, LOW);
    analogWrite(m2a, LOW);
    analogWrite(m2b, carTurn); 
    }
    }
