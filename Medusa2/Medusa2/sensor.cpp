#include "Sensor.h"

Sensor::Sensor(int port)
{
	_port = port;
}

Sensor::~Sensor()
{
}

int Sensor::getPort()
{
	return _port;
}

void Sensor::setPort(int port)
{
	_port = port;
}
