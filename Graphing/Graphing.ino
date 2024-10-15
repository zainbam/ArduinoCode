#include "math.h"

int ang = 0;
float sinval;
float cosval;
float prab;
float prab2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for (float i = 0; i <= 2*3.1415926; i = i +0.1) {
//for (float i = -4; i <=4; i = i +0.1) {
 sinval = sin(i);
 //prab = i*i;
 cosval = cos(i*5);
 //prab2 = - i*i;
Serial.print( sinval);
  Serial.print( ",");
Serial.println( cosval);

}

}
