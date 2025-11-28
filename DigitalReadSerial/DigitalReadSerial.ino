
  int led1 = 3;
  int led2 = 4;
  int led3 = 5;
  int led4 = 6;
  int led5 = 7;

void setup() {
  Serial.begin(9600);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

void loop() {
  lampadas();
}
