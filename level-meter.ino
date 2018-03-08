
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 0;
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if (sensorValue == 0){
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(9,LOW);
  }
  else if (sensorValue>0&&sensorValue<=258){
   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(9,LOW);
  }
  else if (sensorValue>258&&sensorValue<=516){
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(9,LOW);
  }
  else if (sensorValue>516&&sensorValue<=1032){
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(9,HIGH);
  }
}
