#include <Servo.h>
int readpin = A0;
float readval = 0;
float volt = 0;
int delaytime = 500;
float dir=0; 
int servop = 7;
Servo myservo;
void setup() {
  // put your setup code here, to run once:
pinMode (readpin, INPUT);
pinMode (servop, OUTPUT);
myservo.attach(servop);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readval = analogRead(readpin);
volt = (5./1023.)*readval;
Serial.println(readval);
dir = (180./64.)*readval;
myservo.write(dir); 
delay (delaytime);
}
