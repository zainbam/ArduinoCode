int trigg = 12;
int echo = 11;
int travelt;


void setup() {
  // put your setup code here, to run once:
pinMode(trigg, OUTPUT);
pinMode(echo, INPUT); 
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigg, LOW);
delayMicroseconds(10);
digitalWrite(trigg, HIGH);
delayMicroseconds(10);
digitalWrite(trigg, LOW);
delayMicroseconds(10); 

travelt= pulseIn(echo,HIGH);
Serial.println(travelt);
delayMicroseconds(10000000); 

}
