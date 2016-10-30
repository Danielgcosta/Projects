#include "Ultrassonic.h"
#include "string";

using namespace std;

Ultrassonic::Ultrassonic(int port) : Sensor(port)
{
	_type = "Ultrassonic";
}

Ultrassonic::~Ultrassonic()
{
}

string Ultrassonic::getType()
{
	return _type;
}