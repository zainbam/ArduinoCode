int input = 6;
int switchval;

void setup() {
  // put your setup code here, to run once:
pinMode(input, INPUT);
digitalWrite (input, HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
switchval = digitalRead (input);
Serial.print("Switch = ");
Serial.println(switchval);
delay(500);
}
