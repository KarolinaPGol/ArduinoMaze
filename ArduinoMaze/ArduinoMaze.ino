#include <Servo.h>

Servo servoX, servoY;

void setup(){
Serial.begin(9600);

servoX.attach(3);
servoX.write(0);
servoY.attach(2);
servoY.write(0);
delay(100);

}

void loop(){

  for(int i=0; i<=100; i+=20){
    servoX.write(i);
    servoY.write(i);
    delay(400);

    if(i==100){
      for(i; i>=0; i-=20){
        servoX.write(i);
        servoY.write(i);
        delay(400);
      } 
   }
  }//forloop
  */

}
