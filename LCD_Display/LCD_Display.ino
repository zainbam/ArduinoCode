#include <LiquidCrystal.h>

int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;


LiquidCrystal led(rs,en,d4,d5,d6,d7);

void setup() {
  // put your setup code here, to run once:
led.begin(16,2);

}

void loop() {
  // put your main code here, to run repeatedly:
led.setCursor(0,0);
led.print ("I Love You");
led.setCursor(0,1);
led.print ("Baby");
delay(3000);
led.clear();
led.setCursor(0,0);
led.print ("and if its");
led.setCursor(0,1);
led.print ("quiet alright");
delay(3000);
led.clear();
led.setCursor(0,0);
led.print ("I need You");
led.setCursor(0,1);
led.print ("Baby");
delay(3000);
led.clear();
led.setCursor(0,0);
led.print ("to warm these");
led.setCursor(0,1);
led.print ("lonley nights");
delay(3000);
led.clear();
led.setCursor(0,0);
led.print ("I Love You");
led.setCursor(0,1);
led.print ("Baby");
delay(3000);
led.clear();
led.setCursor(0,0);
led.print ("trust in me");
led.setCursor(0,1);
led.print ("when I sayy");
delay(5000);
led.clear();
}
