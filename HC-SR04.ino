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


	sensor.getDistance(); //returns a long with distance in CM
}
