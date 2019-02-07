#include <Servo.h>

Servo servoX, servoY;
/*
int ledPin = 8;
int button1 = 3;
int button2 = 7;
bool gameWon = false;

int sensorValue1 =0;
int sensorPin1 = 3;
int sensorValue2 = 0;
int sensorPin2 = 2;
*/

float angleX = 0; 
float angleY = 0;
 

// Photoresistors
int photoResistorX = 0;
int photoResistorY = 1; 
int photoValueX = 0; 
int photoValueY = 0; 

void setup(){
Serial.begin(9600);


//pinMode(ledPin, OUTPUT);
servoX.attach(4);
servoX.write(angleX);
servoY.attach(2);
servoY.write(angleY);
/*
delay(100);

pinMode(button1, INPUT_PULLUP);
pinMode(button2, INPUT_PULLUP);
*/
}

void loop(){

//buttons();
//loops();
//isWon(); //checks if the game is won - if yes -> light LED
/* potentiometerControl();
servoX.write(angleX);
servoY.write(angleY);*/ 


// Photoresistor
photoValueX = analogRead(photoResistorX);
photoValueY = analogRead(photoResistorY);

angleX=map(photoValueX, 0, 800, 0, 100);
angleY=map(photoValueY, 0, 800, 0, 100);

// problem is here: 
servoX.write(angleX);
servoY.write(angleY);



// For testing: 
  Serial.print("X: ");
  Serial.print(photoValueX);
  Serial.print("\tY: ");
  Serial.print(photoValueY);
  Serial.print("angleX: ");
  Serial.print(angleX);
  Serial.print("\tangleY: ");
  Serial.print(angleY);
  Serial.println("");

}
