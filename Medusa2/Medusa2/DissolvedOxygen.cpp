#include "DissolvedOxygen.h"

using namespace std;

DissolvedOxygen::DissolvedOxygen(int port) : Sensor(port)
{
	_type = "Thermal";
}

DissolvedOxygen::~DissolvedOxygen()
{
}

string DissolvedOxygen::getType()
{
	return _type;
}
