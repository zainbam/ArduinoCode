int senp = 3;
int lr = 8;
int ly = 9;
int lb = 10;
int val;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(senp, INPUT);
pinMode(lr, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
val = digitalRead(senp);
Serial.println(val);
if(val == 1){
  digitalWrite(lr, HIGH);
}
else {
    digitalWrite(lr, LOW);

}
}
