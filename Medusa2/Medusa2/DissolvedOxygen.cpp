#include "DissolvedOxygen.h"

using namespace std;

DissolvedOxygen::DissolvedOxygen(int port) : Sensor(port)
{
	_type = "DissolvedOxygen";
}

DissolvedOxygen::~DissolvedOxygen()
{
}

string DissolvedOxygen::getType()
{
	return _type;
}

void DissolvedOxygen::evaluate()
{
	// Implementar o c�lculo do oxig�nio dissolvido
	_value = 4;
}