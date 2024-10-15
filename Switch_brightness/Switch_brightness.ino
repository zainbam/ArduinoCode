int readval;
int readval2;

int readpin = 7;
int readpin2 = 5;

int glow = 6;
int dt = 100;
float in;
int count= 0;
void setup() {
  // put your setup code here, to run once:
pinMode (readpin, INPUT);
pinMode (readpin, INPUT);

pinMode (glow, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

readval = digitalRead (readpin);
readval2 = digitalRead (readpin2);


if (readval == 0) {
 
 count += 1;
 in = (255./15.)*count;

 analogWrite(glow,in);
 Serial.println(count);

}
Serial.println(count);




if (readval2 == 0) {
 
 count -= 1;
 in = (255./15.)*count;

 analogWrite(glow,in);
 Serial.println(count);

}
Serial.println(count);

if (count < 0){
  count = 0;
   analogWrite(glow,LOW);

}
if (count > 255){
  count = 255;
   analogWrite(glow,LOW);

}

  delay(dt);
}
