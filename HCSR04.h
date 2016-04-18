// HC-SR04.h

#ifndef _HC-SR04_h
#define _HC-SR04_h

#include "Arduino.h"

class HCSR04
{
protected:
	int trigPin;
	int echoPin;
	float distanceCM;
	float distanceIN;
public:
	HCSR04();
	HCSR04(int trPin, int ecPin);
	void begin();
	void update();
	float getDistanceCM();
	float getDistanceIN();
};

#endif