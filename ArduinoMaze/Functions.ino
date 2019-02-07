void buttons(){
  Serial.println(digitalRead(button2));

  if(digitalRead(button1) == LOW){
    if(angleX<=180)
    angleX+=0.5;
  }
 // Serial.println(angleX);

  if(digitalRead(button2) == LOW){
    if(angleX>=0){
      angleX-=0.5;
    }
  }
   //servoX.write(angleX);
}

void loops(){
    for(int i=0; i<=100; i+=20){
    servoX.write(i);
    servoY.write(i/2);
    delay(400);

    if(i==100){
      for(i; i>=0; i-=20){
        servoX.write(i);
        servoY.write(i/2);
        delay(400);
      } 
   }
  }//forloop
}

void isWon(){

    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(100);
}

void potentiometerControl(){
sensorValue1 = analogRead(sensorPin1);
sensorValue2 = analogRead(sensorPin2);

Serial.println(sensorValue1);
angleX=map(sensorValue1, 0, 1023, 0, 100);
angleY=map(sensorValue2, 0, 1023, 0, 100);
}
