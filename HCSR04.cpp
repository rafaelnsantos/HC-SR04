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
	long duration = pulseIn(echoPin, HIGH);
	//duration / 2 / 29
	distanceCM = duration / 2 / 27.6233;
	//duration / 2 / 74
	distanceIN = duration / 2 / 70.1633;
}

long HCSR04::getDistanceCM(){
	return distanceCM;
}

long HCSR04::getDistanceIN(){
	return distanceIN;
}