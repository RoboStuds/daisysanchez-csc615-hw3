#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include <softPwm.h>
 


int main (void){

wiringPiSetup();

//Motor 1
// 0 is to enable
//13 and 15 to control
pinMode(0, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);

//Motor 2
//6 is to enable
//4 and 5 to control
pinMode(6, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);


int var = 0;
  
  while(var < 2) {

printf("Motor moving forward");

//Motor 1 forward
digitalWrite(0, HIGH);
digitalWrite(2, HIGH);
digitalWrite(3, LOW);

//Motor 2 forward 
digitalWrite(6, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, LOW);

delay(5000);

printf("Motor moving backwards");

//Motor 1 Backward 
digitalWrite(0, HIGH);
digitalWrite(2, LOW);
digitalWrite(3, HIGH);

//Motor 2 Backward
digitalWrite(6, HIGH); 
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
 

var++;

    }
  return  0;
} 
