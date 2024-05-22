// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int reading = analogRead(A0);
  Serial.println(reading);
  
  float voltage = reading * (5/1023.0);
  
  Serial.print("Voltage: ");
  Serial.println(voltage, 3);
  
  float percent = (voltage - 2.75)*100/1.45;
  
  if (percent<0){
    percent=0;}
  if (percent>100){
    percent=100;}
  
  Serial.print("Battery Percentage : ");
  Serial.println(percent);
  delay(1000);
}
