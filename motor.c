

#include <studio.h>
#include <stdlib.h>
#include <wiringPi.h> 

int main (void){

wiringPiSetup();

pinMode(7, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
pinMode(15, OUTPUT);
pinMode(16, OUTPUT);
pinMode(18, OUTPUT);

int var = 0;
  
  while(var < 2) {

//Drive motor Clockwise

//Motor A
digitalWrite(12, HIGH);
digitalWrite(11, LOW);

//Motor B
digitalWrite(15, HIGH);
digitalWrite(16, LOW);

//Set the motor speed

//Motor A
digitalWrite(7, HIGH);

//Motor B 
digitalWrite(18, HIGH);

//Disable
digitalWrite(13, HIGH);
delay(5000);

//Drive  motor Counterclockwise

//Motor A
digitalWrite(12, LOW);
digitalWrite(11, HIGH);

//Motor B
digitalWrite(15, LOW);
digitalWrite(16, HIGH);

//Set the motor speed
digitalWrite(7, HIGH);
digitalWrite(18, HIGH);

//Diasble 
digitalWrite(13, HIGH);
delay(5000);

//Reset Pins
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(7, LOW);
digitalWrite(13, LOW);
digitalWrite(15, LOW);
digitalWrite(16, LOW);
digitalWrite(18, LOW);

    }
  return  0;
} 