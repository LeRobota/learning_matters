int SensorPin = 3;
int pinOut = 1;

void setup() {

pinMode(SensorPin,INPUT);
pinMode(pinOut,OUTPUT);
Serial.begin(9600);
}

void loop() {

int SensorVal = digitalRead (SensorPin);


if (SensorVal ==1)
  {
  digitalWrite (pinOut,HIGH);
  }
else
  {
  digitalWrite (pinOut,LOW);
  }  

Serial.println (SensorVal);
delay(10);
  
}
