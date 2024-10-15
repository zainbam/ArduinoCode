#include "DHT.h"
#define TYPE DHT11

int sp = 2;
float tempc;
float humid;
float tempf;

DHT obj (sp,TYPE);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
obj.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
tempc = obj.readTemperature();
tempf = obj.readTemperature(true);
humid = obj.readHumidity();

 Serial.print("Temp c: ");
Serial.print(tempc);
 Serial.print(" Temp f: ");
Serial.print(tempf);
 Serial.print("Humidity: ");
Serial.println(humid);

delay(1000);
}
