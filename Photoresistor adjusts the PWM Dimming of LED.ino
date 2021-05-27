int sensorValue = 0;
 int ledDimming = 0;
int pwmPin = 9; 
void setup() 
{ 
pinMode(A0, INPUT); 
Serial.begin(9600); 
pinMode(pwmPin, OUTPUT); 
} 
void loop() { 
sensorValue = analogRead(A0);
 Serial.print("PhotoResistor read = ");
 Serial.println(sensorValue);
 ledDimming = map(sensorValue, 652, 923, 0, 255);
 if (ledDimming < 0) ledDimming = 0; 
  Serial.print("led Dimming =");
  Serial.println(ledDimming);
analogWrite(pwmPin, ledDimming); 
  delay(1000);
}
