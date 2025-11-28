void lampadas() {
  // digitalWrite(led1,HIGH);
  // delay(1000);
  // digitalWrite(led1,LOW);

  if(Serial.available()) {

    char led = Serial.read();

    switch(led){
    case 'a':
    Serial.print(led);
    if (digitalRead(led1) == HIGH){
      digitalWrite(led1, LOW);
    }else{
      digitalWrite(led1, HIGH);
    }
    break;
    case 's':
     Serial.print(led);
    if (digitalRead(led2) == HIGH){
      digitalWrite(led2, LOW);
    }else{
      digitalWrite(led2, HIGH);
    }
    break;
    case 'd':
    Serial.print(led);
    if (digitalRead(led3) == HIGH){
      digitalWrite(led3, LOW);
    }else{
      digitalWrite(led3, HIGH);
    }
    break;
    case 'f':
     Serial.print(led);
    if (digitalRead(led4) == HIGH){
      digitalWrite(led4, LOW);
    }else{
      digitalWrite(led4, HIGH);
    }
    break;
    case 'g':
    Serial.print(led);
    if (digitalRead(led5) == HIGH){
      digitalWrite(led5, LOW);
    }else{
      digitalWrite(led5, HIGH);
    }
    break;
    }
  }
  delay(500);
}
