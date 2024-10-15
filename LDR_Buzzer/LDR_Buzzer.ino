
//Passive Buzzer
int readpin = A0;
float readval = 0;
float buzztime = 0;
int delaytime = 500;
int out = 7;

void setup() {
  // put your setup code here, to run once:
pinMode (readpin, INPUT);
pinMode (out, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readval = analogRead(readpin);
buzztime = ((9./60.)*readval) + 1;
Serial.println(readval);

digitalWrite(out, HIGH);
delay (buzztime);
digitalWrite(out, LOW);
delay (buzztime);
}
