int sensorPin=A0;
int sensorValue=0;
int firstLED=0;
string voltage=LOW;
int sLength=0;
string sentence = "Your homework assignment is overdue.";

void setup(){
  pinMode(0, OUTPUT);
  for(i=0,i<sentence.length(),i++){
    letter[i]=sentence.substring(0+i,1+i);
  }
}

void loop(){
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
  digitalWrite(13,voltage);

  
  delay(3000); //end of sentence
}
