#include "OxygenReduction.h"
using namespace std;

OxygenReduction::OxygenReduction(int port) : Sensor(port)
{
	_type = "OxygenReduction";
}

OxygenReduction::~OxygenReduction()
{
}

string OxygenReduction::getType()
{
	return _type;
}

void OxygenReduction::evaluate()
{
	/*
	string sensorString;
	// If a character has been received
	if (orpSerial.available() > 0)
	{
		// Gets the received char
		char inchar = (char)orpSerial.read();
		// Composes the string
		sensorString += inchar;
		// Reading ends with a CR
		if (inchar == '\r') {
			_value = sensorString.toFloat();
		}
	}
	*/

	// DELETAR:
	_value = 2;
}
