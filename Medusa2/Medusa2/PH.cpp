#include "PH.h"

using namespace std;

PH::PH() 
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
