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
	// E = E0 + RT*ln(alphaH+)/F = E0 - 2.303*R*T*pH/F
	// R = Ideal Gas Constant
	// T = Temperature in Kelvin
	// F = Faraday constant

	// Hence we must calibrate E0 with the neutral solution
	const float E0 = 1; //dummy value for now, overwrite with calibration value
	//_value = (E0-E)*F/(2.303*R*T)

	_value = 2;
}
