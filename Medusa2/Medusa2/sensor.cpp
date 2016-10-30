#include "sensor.h"

sensor::sensor(int port)
{
	_port = port;
}

sensor::~sensor()
{
}

int sensor::getPort()
{
	return _port;
}

void sensor::setPort(int port)
{
	_port = port;
}

