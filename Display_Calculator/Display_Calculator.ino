#include <LiquidCrystal.h>

int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
int d1;
int d2;
String op;
float ans;

LiquidCrystal led(rs,en,d4,d5,d6,d7);

void setup() {
  // put your setup code here, to run once:
led.begin(16,2);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
led.setCursor(0,0);
led.print ("Enter 1st Number");
while(Serial.available() == 0){
  
}
d1 = Serial.parseInt();
led.clear();

led.setCursor(0,0);
led.print ("Enter 2nd Number");
while(Serial.available() == 0){
  
}
d2 = Serial.parseInt();
led.clear();

led.setCursor(0,0);
led.print ("Enter Operator");
while(Serial.available() == 0){
  
}
op = Serial.readString();
led.clear();

if (op == "+") {
  ans = d1 + d2;
}
if (op == "-") {
  ans = d1 - d2;
}
if (op == "*") {
  ans = d1 * d2;
}
if (op == "/") {
  ans = d1 / d2;
}

led.clear();
led.setCursor(0,0);
led.print(d1);
led.print(op);
led.print(d2);
led.print(" = ");
led.print(ans);

delay(5000);
}
