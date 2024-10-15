int latchPin=11;
int clockPin=9;
int dataPin=12;
int dt=1000;
float x;
 
byte LED1s=0b00000001;
 
//Circular Shift Left 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(latchPin,OUTPUT);
pinMode(dataPin,OUTPUT);
pinMode(clockPin,OUTPUT);
}
 
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(latchPin,LOW);
shiftOut(dataPin,clockPin,LSBFIRST,LED1s);
digitalWrite(latchPin,HIGH);
 
Serial.println(LED1s,BIN);
delay(dt);
LED1s= (LED1s/128) + LED1s*2; //CSL
//CSR LED1s= (LED1s*128) + LED1s/2
}
