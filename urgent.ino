string voltage=LOW;
string letter=[];
string sentence = "Urgent: your roof is leaking onto your bed - please come take care of it immediately."

void setup(){
  pinMode(0, OUTPUT);
  for(i=0,i<sentence.length(),i++){
    letter[i]=sentence.toUpperCase().substring(0+i,1+i);
  }
}

void loop(){
  for(i=0,i<sentence.length(),i++){
    if(letter[i]=="A"||letter[i]="B"||letter[i]="C"||letter[i]="D"||letter[i]="E"||letter[i]="F"||letter[i]="G"){
      voltage=HIGH;
      delay(4000);
   }
    else if(letter[i]="H"||letter[i]="I"||letter[i]="J"||letter[i]="K"||letter[i]="L"||letter[i]="M"||letter[i]="N"){
      voltage=HIGH;
      delay(3000);
    }
    else if(letter[i]="O"||letter[i]="P"||letter[i]="Q"||letter[i]="R"||letter[i]="S"||letter[i]="T"||letter[i]="U"){
      voltage=LOW;
      delay(2000);
    }
    else if(letter[i]="V"||letter[i]="W"||letter[i]="X"||letter[i]="Y"||letter[i]="Z"||letter[i]=","||letter[i]="."||letter[i]=" "||letter[i]="'"||letter[i]="!"||letter[i]="-"){
      voltage=LOW;
      delay(1000);
    }
    digitalWrite(13,voltage);
    delay(0500);
    digitalWrite(13,voltage);
  }
  delay(5000); //end of sentence
}
