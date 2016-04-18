#include "HCSR04.h"
HCSR04 sensor(10, 11);
void setup()
{
	sensor.begin();
  /* add setup code here */

}

void loop()
{
	sensor.update();
  /* add main program code here */


	sensor.getDistance();
}
