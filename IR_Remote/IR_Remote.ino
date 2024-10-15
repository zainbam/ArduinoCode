#include <IRremote.h>
int irp = 8;
IRrecv IR (irp);
decode_results cmd;
int dt = 1000;

void setup() {
  // put your setup code here, to run once:
IR.enableIRIn();
Serial.begin(9600);
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
  Serial.println("VOL-");
}
if (cmd.value == 0xFFA857 ){
  Serial.println("VOL+");
}
if (cmd.value == 0xFF906F ){
  Serial.println("EQ");
}
if (cmd.value == 0xFF22DD ){
  Serial.println("PREVIOUS");
}
if (cmd.value == 0xFF02FD ){
  Serial.println("NEXT");
}
if (cmd.value == 0xFFC23D ){
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
