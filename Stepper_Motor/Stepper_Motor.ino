#include <Stepper.h>
int stprev = 2048;
Stepper mystep (stprev, 8,9,10,11);
int sped = 10;
int sw = 7;
int swold = 1;
int swnew = 1;
int dir = 1;

void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
mystep.setSpeed (sped);
pinMode (sw, INPUT);
digitalWrite (sw, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
swnew = digitalRead (sw);
 if ( swold == 1 && swnew == 1) {
  dir = dir * (-1);
 }
   mystep.step(dir*stprev);

 swnew = swold;
}
