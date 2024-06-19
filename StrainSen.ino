const int SensorPin = 4;
#define ONBOARD_LED 2
//pin A0 as Sensor Input
int value; //sensor value
void setup() {
pinMode(ONBOARD_LED,OUTPUT);
Serial.begin (9600); //start serial port
}
void loop() {
  
value = analogRead(SensorPin);
//value = map (value, 0, 1023, 0, 255);
if(value < 2000){
  digitalWrite(ONBOARD_LED,HIGH);
}
else {
  digitalWrite(ONBOARD_LED,LOW);
}
Serial.println (value);

delay(200);
}
