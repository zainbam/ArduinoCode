int readpin = A0;
float readval = 0;
float volt = 0;
int delaytime = 500;
int redpin = 7;
int greenpin = 8;


void setup() {
  // put your setup code here, to run once:
pinMode (readpin, INPUT);
pinMode (redpin, OUTPUT);
pinMode (greenpin, OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readval = analogRead(readpin);
volt = (5./1023.)*readval;
Serial.println(readval);
delay (delaytime);

if (readval >= 35) 
{
  digitalWrite(redpin, HIGH);
 
    digitalWrite(greenpin, LOW);

}
if (readval < 35) 
{
  digitalWrite(redpin, LOW);
    digitalWrite(greenpin, HIGH);

}

}
