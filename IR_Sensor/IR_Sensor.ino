int senpin = A5;
int ind = 7;
float val;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(senpin, INPUT);
pinMode(ind, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
val = analogRead(senpin);
Serial.println(val);
}
