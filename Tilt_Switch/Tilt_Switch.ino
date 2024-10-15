int sw = 7;
int bp = 8;
int rp = 9; 
int swv;

void setup() {
  // put your setup code here, to run once:
pinMode (sw, INPUT);
digitalWrite (sw, HIGH);
pinMode (bp, OUTPUT);
pinMode (rp, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
swv = digitalRead (sw);

if (swv == 0) {
  digitalWrite (bp, HIGH);
  digitalWrite (rp, LOW);

}

else if (swv == 1) {
  digitalWrite (rp, HIGH);
  digitalWrite (bp, LOW);

}

}
