int sensorPin=A0;
int sensorValue=0;
int firstLED=0;
int secondLED=0;
int thirdLED=0;
string firstSwitch=LOW;
string secondSwitch=LOW;
string thirdSwitch=LOW;

void setup(){
  pinMode(firstLED,OUTPUT);
  pinMode(secondLED,OUTPUT);
  pinMode(thirdLED,OUTPUT);
}

void loop(){
  sensorValue=analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue==0){
    firstSwitch=LOW;
    secondSwitch=LOW;
    thirdSwitch=LOW;
  }
  else if(sensorValue>0&&sensorValue<=258){
    firstSwitch=LOW;
    secondSwitch=LOW;
    thirdSwitch=HIGH;
  }
  else if(sensorValue>258&&sensorValue<=516){
    firstSwitch=LOW;
    secondSwitch=HIGH;
    thirdSwitch=HIGH;
  }
  else if(sensorValue>516&&sensorValue<=1032){
    firstSwitch=HIGH;
    secondSwitch=HIGH;
    thirdSwitch=HIGH;
  }
  digitalWrite(5,firstSwitch);
  digitalWrite(6,secondSwitch);
  digitalWrite(9,thirdSwitch);
}
