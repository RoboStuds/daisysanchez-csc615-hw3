#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include <softPwm.h>
 


int main (void){

wiringPiSetup();

//Motor 1
// 0 is to enable
//2 and 3 to control
pinMode(0, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);

//Motor 2
//6 is to enable
//4 and 5 to control
pinMode(6, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);

int softPwmCreate (int 0, int 10, int 100) ;
int softPwmCreate (int 6, int 30, int 100) ;
  
int var = 0;
  
  while(var < 2) {

//Motor 1 moves forward
digitalWrite(0, HIGH);
digitalWrite(2, HIGH);
digitalWrite(3, LOW);

//Motor 2 moves forward 
digitalWrite(6, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, LOW);

delay(5000);

printf("Motor moving backward")

//Motor 1 moves Backward 
digitalWrite(0, HIGH);
digitalWrite(2, LOW);
digitalWrite(3, HIGH);

//Motor 2 moves Backward
digitalWrite(6, HIGH); 
digitalWrite(4, LOW);
digitalWrite(5, HIGH);


delay(5000);

printf("Motors stop");

//Stop the Motors
digitalWrite(0, LOW);
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(6, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);

var++;

    }
  return  0;
} 
