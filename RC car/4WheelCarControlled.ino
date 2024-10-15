const int in1A = 11;
const int in2A = 10;
const int in1B = 9;
const int in2B = 6;
//const int ledPinBlue = 12;
//const int ledPinRed = 13;
//const int wheelLed = 8;
//const int chasisLed = 7;
int carSpeed = 220;
float speedRatio = 0.4;

void setup() {
  Serial.begin(9600);  
  pinMode(in1A, OUTPUT);
  pinMode(in2A, OUTPUT);
  pinMode(in1B, OUTPUT);
  pinMode(in2B, OUTPUT);
//  pinMode(ledPinBlue, OUTPUT);
//  pinMode(ledPinRed, OUTPUT);
//  pinMode(wheelLed, OUTPUT);
//  pinMode(chasisLed, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char inputData = Serial.read();
    Serial.println(inputData);

//  Booster
    if (inputData == 'W') {
      carSpeed = 255;
//      digitalWrite(ledPinBlue, HIGH);    
    }
    else if (inputData == 'w') {
      carSpeed = 200;
//      digitalWrite(ledPinBlue, LOW);
    }

//  Slippery Surface


//  Forwards
    if (inputData == 'F') {
//      analogWrite(in1A, LOW);
      analogWrite(in2A, carSpeed);
//      analogWrite(in1B, LOW);
      analogWrite(in2B, carSpeed);  
    }
//  Stop  
    else if (inputData == 'S') {
      digitalWrite(in1A, LOW);
      digitalWrite(in2A, LOW);
      digitalWrite(in1B, LOW);
      digitalWrite(in2B, LOW);
    }
//  Backwards
    else if (inputData == 'B') {
      analogWrite(in1A, carSpeed);
//      analogWrite(in2A, LOW);
      analogWrite(in1B, carSpeed);
//      analogWrite(in2B, LOW);
    }
//  Turn Right  
    else if (inputData == 'R') {
      analogWrite(in1A, LOW);
      analogWrite(in2A, carSpeed);
      analogWrite(in1B, carSpeed);
      analogWrite(in2B, LOW);
    }
//  Turn Left
    else if (inputData == 'L') {
      analogWrite(in1A, carSpeed);
      analogWrite(in2A, LOW);
      analogWrite(in1B, LOW);
      analogWrite(in2B, carSpeed);
    }
//  Turn Forward Left
    else if (inputData == 'I') {
      analogWrite(in1A, LOW);
      analogWrite(in2A, carSpeed);
      analogWrite(in1B, LOW);
      analogWrite(in2B, (carSpeed * speedRatio));
    }
//  Turn Forwad Right
    else if (inputData == 'G') {
      analogWrite(in1A, LOW);
      analogWrite(in2A, (carSpeed * speedRatio));
      analogWrite(in1B, LOW);
      analogWrite(in2B, carSpeed);
    }
//  Turn Backward Right
    else if (inputData == 'J') {
      analogWrite(in1A, carSpeed);
      analogWrite(in2A, LOW);
      analogWrite(in1B, (carSpeed * speedRatio));
      analogWrite(in2B, LOW);  
    }
//  Turn Backward Left  
    else if (inputData == 'H') {
      analogWrite(in1A, (carSpeed * speedRatio));
      analogWrite(in2A, LOW);
      analogWrite(in1B, carSpeed);
      analogWrite(in2B, LOW);
    }
    
  delay(20);
  }
}
