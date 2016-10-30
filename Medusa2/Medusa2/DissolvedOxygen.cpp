#include "DissolvedOxygen.h"

using namespace std;

DissolvedOxygen::DissolvedOxygen(int port) : Sensor(port)
{
	_type = "DissolvedOxygen";
}

DissolvedOxygen::~DissolvedOxygen()
{
}

string DissolvedOxygen::getType()
{
	return _type;
}

void DissolvedOxygen::evaluate()
{
	/*
	string sensorString;
	// If a character has been received
	if (dissolvedOxygenSerial.available() > 0)
	{
		// Gets the received char
		char inchar = (char)dissolvedOxygenSerial.read();
		// Composes the string
		sensorString += inchar;
		// Reading ends with a CR
		if (inchar == '\r') {
			_value = sensorString.toFloat();
		}
	}
	*/

	// DELETAR:
	_value = 3;
}