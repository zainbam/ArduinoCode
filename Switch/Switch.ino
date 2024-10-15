int readval;
int readpin = 7;
int glow = 8;
int dt = 100;
int toggle = 1;

void setup() {
  // put your setup code here, to run once:
pinMode (readpin, INPUT);
pinMode (glow, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

readval = digitalRead (readpin);
Serial.println(readval);

if (readval == 0) {
 digitalWrite (glow, HIGH);

 
}

if (readval == 1) {
 digitalWrite (glow, LOW);
}



  delay(dt);
}
