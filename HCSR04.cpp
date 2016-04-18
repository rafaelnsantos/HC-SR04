// 
// 
// 

#include "HCSR04.h"

HCSR04::HCSR04(){}

HCSR04::HCSR04(int trPin, int ecPin){
	trigPin = trPin;
	echoPin = ecPin;
}

void HCSR04::begin(){
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);
}

void HCSR04::update(){
	digitalWrite(trigPin, LOW);
	delayMicroseconds(2);
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);
	distance = (pulseIn(echoPin, HIGH) / 2) / 29.1;
}

long HCSR04::getDistance(){
	return distance;
}