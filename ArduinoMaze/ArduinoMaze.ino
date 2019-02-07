#include <Servo.h>

Servo servoX, servoY;

int ledPin = 8;
int button1 = 3;
int button2 = 7;
float angleX = 0;
float angleY = 0;
bool gameWon = false;

int sensorValue1 =0;
int sensorPin1 = 3;
int sensorValue2 = 0;
int sensorPin2 = 2;

void setup(){
Serial.begin(9600);

pinMode(ledPin, OUTPUT);
servoX.attach(4);
servoX.write(angleX);
servoY.attach(2);
servoY.write(angleY);
delay(100);

pinMode(button1, INPUT_PULLUP);
pinMode(button2, INPUT_PULLUP);

}

void loop(){

//buttons();
//loops();
//isWon(); //checks if the game is won - if yes -> light LED
potentiometerControl();
servoX.write(angleX);
servoY.write(angleY);

}
