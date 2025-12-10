void LDR(){
ldrValue =  analogRead(ldrpin);
Serial.println(ldrValue);

if (ldrValue>700){
  Serial.println("NIGHT");

}else if(ldrValue<700)
 Serial.println("DAY");
}