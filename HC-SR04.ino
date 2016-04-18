//Example, acessing the distance using getDistance();
#include "HCSR04.h"
HCSR04 sensor(10,11); //trigPin, echoPin
void setup()
{
	sensor.begin();
}

void loop()
{
	sensor.update();

	float distanceCM = sensor.getDistanceCM();
	float distanceIN = sensor.getDistanceIN();
}
