// HC-SR04.h

#ifndef _HC-SR04_h
#define _HC-SR04_h

#include "Arduino.h"

class HCSR04
{
protected:
	int trigPin;
	int echoPin;
	long distance;
public:
	HCSR04();
	HCSR04(int trPin, int ecPin);
	void begin();
	void update();
	long getDistance();
};

#endif