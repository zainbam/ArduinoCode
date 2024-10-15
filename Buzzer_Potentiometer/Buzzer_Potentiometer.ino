float potval;
int buzz = 6;
float ton;
int readval = A0;


void setup() {
  // put your setup code here, to run once:
pinMode(buzz, OUTPUT);
pinMode(readval, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potval = analogRead(readval);
ton = ((9940./1023.)*potval) + 60;
digitalWrite(buzz, HIGH);
delayMicroseconds (ton);
digitalWrite(buzz, LOW);
delayMicroseconds (ton);

}
