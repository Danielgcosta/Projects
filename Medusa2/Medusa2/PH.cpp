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

void PH::evaluate()
{
	// E = E0 + RT*ln(alphaH+)/F = E0 - 2.303*RT*pH/F
	// R = Ideal Gas Constant
	// T = Temperature in Kelvin
	// F = Faraday constant
	_value = 2;
}
