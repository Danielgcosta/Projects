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

void Ultrassonic::evaluate()
{
	// Implementar o cálculo da distância e retorno do sensor
	_value = 0;
}