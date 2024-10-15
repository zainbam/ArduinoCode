int vin = A0;
int l = 6;
int led ;
float input;

void setup() {
  // put your setup code here, to run once:
pinMode (vin, INPUT);
pinMode (l, OUTPUT);
Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
input = analogRead (vin);
led = (255./1023.)*input;
analogWrite (l,led);
Serial.println(led);
}
