int p1 = 7;
int p2 = 8;
int p3 = 9;
String msg = "Which colour LED you want to blink(choose number): "; 
String msg1 = "1 = RED"; 
String msg2 = "2 = YELLOW"; 
String msg3 = "3 = BLUE"; 

int col;
int j;
int d = 500;
void setup() {
  // put your setup code here, to run once:
pinMode(p1, OUTPUT);
pinMode(p2, OUTPUT);
pinMode(p3, OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
Serial.println(msg1);
Serial.println(msg2);
Serial.println(msg3);

while(Serial.available() == 0){
  
}
col = Serial.parseInt();


if(col == 1){
  digitalWrite(p1,HIGH);
  digitalWrite(p2,LOW);
  digitalWrite(p3,LOW);

}
if(col == 2){
  digitalWrite(p1,LOW);
  digitalWrite(p2,HIGH);
  digitalWrite(p3,LOW);
}
if(col == 3){
 digitalWrite(p1,LOW);
  digitalWrite(p2,LOW);
  digitalWrite(p3,HIGH);
}
delay(d);
}
