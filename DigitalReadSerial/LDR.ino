void LDR(){
ldrValue =  analogRead(ldrpin);

Serial.print("LDR: ");
Serial.println(ldrValue);

if (ldrValue>700){
  Serial.println("ta escuro po");

}else if(ldrValue<700)
 Serial.println("ta claro po");
}