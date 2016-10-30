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
