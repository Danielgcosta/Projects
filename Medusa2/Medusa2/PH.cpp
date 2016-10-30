#include "PH.h"
using namespace std;

PH::PH(int port) : Sensor(port)
{
	_type = "PH";
}

PH::~PH()
{
}

string PH::getType()
{
	return _type;
}
