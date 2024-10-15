int myp = 7;
String msg = "How many blinks you want"; 
int num;
int j;
void setup() {
  // put your setup code here, to run once:
pinMode(myp, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  j=0;
Serial.print(msg);
while(Serial.available() == 0){
  
}
num = Serial.parseInt();

for (j; j<num; j=j+1){
  digitalWrite (myp, HIGH);
  delay (500);
  digitalWrite (myp, LOW);
  delay (500);
}

}
