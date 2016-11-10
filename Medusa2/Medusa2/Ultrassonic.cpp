#include "Ultrassonic.h"
#include <iostream>

using namespace std;

Ultrassonic::Ultrassonic(int port, int trigger) : Sensor(port)
{
	_type = "Ultrassonic";
	setTrigger(trigger);
}

Ultrassonic::Ultrassonic(int port) : Sensor(port)
{
	cout << "Select trigger port: " << endl;
	int trigger;
	cin >> trigger;
	_type = "Ultrassonic";
	setTrigger(trigger);
}

Ultrassonic::~Ultrassonic()
{
}

string Ultrassonic::getType()
{
	return _type;
}

int Ultrassonic::getTrigger()
{
	return _triggerPort;
}

void Ultrassonic::setTrigger(int port)
{
	_triggerPort = port;
}

void Ultrassonic::evaluate()
{
	// Implementar o cálculo da distância e retorno do sensor
	cout << "Reading port " << getPort() << endl;
	
	cout << "Triggering port " << getTrigger() << endl;
	// Dispara o ultrassom
	//uncomment
	//digitalWrite(_triggerPort, LOW);
	//delayMicroseconds(20);
	//digitalWrite(_triggerPort, HIGH);
	//delayMicroseconds(20);
	//digitalWrite(_triggerPort, LOW);

	// unsigned long pulse = pulseIn(getPort(), HIGH);

	_value = 0;
	cout << "Value read " << _value << endl;
	
}