
int p=9;
int b1=1;
int b2=50;
int b3=125;
int b4=200;
int b5=255;

int d=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(p,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(p,b1);
delay (d);

analogWrite(p,b2);
delay (d);

analogWrite(p,b3);
delay (d);

analogWrite(p,b4);
delay (d);

analogWrite(p,b5);
delay (d);

}
