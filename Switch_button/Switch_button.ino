int readpin = 7;
int glow = 8;
int dt = 100;
int readnew ;
int readold=1;
int ledmode = 0;
void setup() {
  // put your setup code here, to run once:
pinMode (readpin, INPUT);
pinMode (glow, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

readnew = digitalRead (readpin);

if (readold == 0 && readnew == 1) {
 
 if (ledmode == 0) {
digitalWrite (glow, HIGH);
ledmode = 1;
}

else {
digitalWrite (glow, LOW);
ledmode = 0;
}


}
readold=readnew;
  delay(dt);
}
