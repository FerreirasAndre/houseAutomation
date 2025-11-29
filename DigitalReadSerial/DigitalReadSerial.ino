#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

  int led1 = 3;
  int led2 = 4;
  int led3 = 5;
  int led4 = 6;
  int led5 = 7;

void setup() {
  Serial.begin(9600);

//módulo lampadas
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);

//módulo display

lcd.begin(16, 2);
lcd.clear();
lcd.setCursor(0, 0);
}

void loop() {
  lampadas();
  display();
}
