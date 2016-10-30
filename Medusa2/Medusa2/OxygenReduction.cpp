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