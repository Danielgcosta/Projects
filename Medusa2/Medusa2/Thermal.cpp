#include "Thermal.h"

using namespace std;

Thermal::Thermal(int port) : Sensor(port)
{
	_type = "Thermal";
}

Thermal::~Thermal()
{
}

string Thermal::getType()
{
	return _type;
}

void Thermal::evaluate()
{
	// Calibrate sensor
	// 1st wire ----[GND]
	// 2nd wire ----[DATA] 
	//			\---[4,7K]----[5V]
	
	// For example, if analog pin reads 250-700 when temps are 1.4C to 44.1C
	//float x = map(analogRead(_port), 250, 700, 14, 441)/10;  
	//_value /= 10.0;          // divide by 10; map() uses integers
	_value = 1;
}