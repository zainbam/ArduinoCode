int potp = A0;
int readval ;
int buzzp = 7;
int d = 1000;

void setup() {
  // put your setup code here, to run once:
pinMode (potp, INPUT);
pinMode (buzzp, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readval = analogRead(potp);

  Serial.println(readval);

 if (readval >= 1000){
  digitalWrite (buzzp,HIGH);
  delay (d);
  digitalWrite (buzzp,LOW);
  delay (d);
 }
if (readval < 1000) {
  digitalWrite (buzzp,LOW);
  delay (d);
}

}
