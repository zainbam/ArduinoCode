int readpin = A0;
float readval = 0;
float volt = 0;
int delaytime = 500;

void setup() {
  // put your setup code here, to run once:
pinMode (readpin, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readval = analogRead(readpin);
volt = (5./1023.)*readval;
Serial.println(readval);
delay (delaytime);
}
