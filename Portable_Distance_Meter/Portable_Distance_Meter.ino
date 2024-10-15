#include <LiquidCrystal.h>

int trigg = 5;
int echo = 6;
int travelt;
double dis;
float v = 767;

int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
int d1;
int d2;


LiquidCrystal led(rs,en,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
pinMode(trigg, OUTPUT);
pinMode(echo, INPUT);
led.begin(16,2);
 
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigg, LOW);
delayMicroseconds(10);
digitalWrite(trigg, HIGH);
delayMicroseconds(10);
digitalWrite(trigg, LOW);
delayMicroseconds(10); 

travelt= pulseIn(echo,HIGH);
dis = ((765.*5280.*12.)/(3600.*1000000.))*travelt;
led.setCursor(0,0);
led.print("Distance in Inch: ");
led.setCursor(0,1);
led.println(dis/2);
delay(500);
led.clear();
//DONT FORGET TO PUT POINT AFTER FLOAT 
}
