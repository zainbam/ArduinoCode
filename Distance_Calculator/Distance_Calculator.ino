int trigg = 12;
int echo = 11;
int travelt;
double dis;
float v = 767;
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
dis = ((765.*5280.*12.)/(3600.*1000000.))*travelt;
Serial.print("Mile: ");
Serial.println(dis/2);
//DONT FORGET TO PUT POINT AFTER FLOAT 
}
