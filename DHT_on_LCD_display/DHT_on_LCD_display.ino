#include <LiquidCrystal.h>
#include "DHT.h"
#define TYPE DHT11

int sp = 2;
float tempc;
float humid;
float tempf;
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

DHT obj (sp,TYPE);
LiquidCrystal led(rs,en,d4,d5,d6,d7);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
obj.begin();
led.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
tempc = obj.readTemperature();
tempf = obj.readTemperature(true);
humid = obj.readHumidity();


led.setCursor(0,0);
led.print("Temp c: ");
led.setCursor(0,1);
led.print(tempc);
delay(3000);
led.clear();

led.setCursor(0,0);
led.print("Temp f: ");
led.setCursor(0,1);
led.print(tempf);
delay(3000);
led.clear();

led.setCursor(0,0);
led.print("Humidity: ");
led.setCursor(0,1);
led.println(humid);
delay(3000);
led.clear();

}
