int xin = A0;
int yin = A1;
int xval;
int yval;
int swp = 8;
int sw;

void setup() {
  // put your setup code here, to run once:
pinMode(xin, INPUT);
pinMode(yin, INPUT);
pinMode(swp, INPUT);
digitalWrite(swp, HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
xval = analogRead (xin);
yval = analogRead (yin);
sw = digitalRead (swp);
delay(200);
Serial.print("x = ");
Serial.print(xval);

Serial.print(" y = ");
Serial.print(yval);

Serial.print(" Button = ");
Serial.println(sw);

}
