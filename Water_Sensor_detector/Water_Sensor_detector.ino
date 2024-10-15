int senpin = A0;
double senval = 0;

void setup() {
  // put your setup code here, to run once:
pinMode (senpin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
senval=analogRead(senpin);
//Serial.println(senval);


if (senval<400){
Serial.println("Empty");
}
else if(senval>400 && senval<600)
Serial.println("Low");

else if(senval>600 && senval<647)
Serial.println("Medim");

else if(senval>647)
Serial.println("High");
delay(1000);

 }
