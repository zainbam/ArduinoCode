int readpin = A0;
float readval = 0;
float volt = 0;
int delaytime = 500;
int pins = 5;
int pinw = 6;
int pind = 7;

void setup() {
  // put your setup code here, to run once:
pinMode (readpin, INPUT);
pinMode (pins, OUTPUT);
pinMode (pinw, OUTPUT);
pinMode (pind, OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readval = analogRead(readpin);
volt = (5./1023.)*readval;
Serial.println(volt);

if(volt<3){
  digitalWrite(pins,HIGH);
  }
  if(volt>3){
  digitalWrite(pins,LOW);
  }
  
if(volt>3&&volt<4){
  digitalWrite(pinw,HIGH);
  }
  if(volt<3||volt>4){
  digitalWrite(pinw,LOW);
  }  

if(volt>4){
  digitalWrite(pind,HIGH);
  }
  if(volt<4){
  digitalWrite(pind,LOW);
  }

delay (delaytime);

}
