#include <IRremote.h>
int en= 1;
int dir1 = 2;
int dir2 = 7;
int irp = 9;
int myspeed = 0;
IRrecv IR (irp);
decode_results cmd;
int dt = 100;

void setup() {
  // put your setup code here, to run once:
IR.enableIRIn();
Serial.begin(9600);
pinMode(en, OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
while (IR.decode (&cmd) == 0){
  
}
//Serial.println(cmd.value, HEX);
delay(dt);
IR.resume();

if (cmd.value == 0xFF6897 ){
  Serial.println("ZERO");
}
if (cmd.value == 0xFF30CF ){
  Serial.println("ONE");
}
if (cmd.value == 0xFF18E7 ){
  Serial.println("TWO");
}
if (cmd.value == 0xFF7A85 ){
  Serial.println("THREE");
}
if (cmd.value == 0xFF10EF ){
  Serial.println("FOUR");
}
if (cmd.value == 0xFF38C7 ){
  Serial.println("FIVE");
}
if (cmd.value == 0xFF5AA5 ){
  Serial.println("SIX");
}
if (cmd.value == 0xFF42BD ){
  Serial.println("SEVEN");
}
if (cmd.value == 0xE0F82304 ){
  Serial.println("EIGHT");
}
if (cmd.value == 0xFF52AD ){
  Serial.println("NINE");
}
if (cmd.value == 0xFF9867 ){
  Serial.println("100+");
}
if (cmd.value == 0xFFB04F ){
  Serial.println("200+");
}
if (cmd.value == 0xFFE01F ){
   myspeed-=15;
  if(myspeed<= 0){
    myspeed = 0;
  }
  Serial.println("VOL-");
}
if (cmd.value == 0xFFA857 ){
  myspeed+=15;
  if(myspeed >= 255){
    myspeed = 255;
  }
  Serial.println("VOL+");
}
if (cmd.value == 0xFF906F ){
  myspeed = 0;
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, HIGH);
    analogWrite (en,0);
  Serial.println("EQ");
}
if (cmd.value == 0xFF22DD ){
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, HIGH);
  myspeed = 175;
  analogWrite (en,myspeed);
  Serial.println("PREVIOUS");
}
if (cmd.value == 0xFF02FD ){
  digitalWrite(dir1, HIGH);
  digitalWrite(dir2, LOW);
    myspeed = 175;
  analogWrite (en,myspeed);
  Serial.println("NEXT");
}
if (cmd.value == 0xFFC23D ){
  digitalWrite(dir1, HIGH);
  digitalWrite(dir2, LOW);
    myspeed = 175;
  analogWrite (en,myspeed);
  Serial.println("PLAY/PAUSE");
}
if (cmd.value == 0xFFA25D ){
  Serial.println("CHANNEL PREVIOUS");
}
if (cmd.value == 0xFF629D ){
  Serial.println("CHANNEL NEXT");
}
if (cmd.value == 0xFFE21D ){
  Serial.println("CHANNEL PLAY/PAUSE");
}


}
