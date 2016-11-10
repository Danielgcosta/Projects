#include "Ultrassonic.h"
#include <iostream>

using namespace std;

// Number of readings to average
const int NUMBER_OF_READINGS = 3;

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
	
	//UNCOMMENT!
	double readings[NUMBER_OF_READINGS];
	for (unsigned int reading = 0; reading < NUMBER_OF_READINGS; reading++) {
		//digitalWrite(_triggerPort, LOW);
		//delayMicroseconds(20);
		//digitalWrite(_triggerPort, HIGH);
		//delayMicroseconds(20);
		//digitalWrite(_triggerPort, LOW);

		// unsigned long pulse = pulseIn(getPort(), HIGH);
		double pulse = 3.;
		readings[reading] = pulse / 58.;
	}
	double sum = 0;
	for (unsigned int reading = 0; reading < NUMBER_OF_READINGS; reading++) {
		sum += readings[reading];
	}
	_value = sum/NUMBER_OF_READINGS;
	cout << "Value read " << _value << endl;	
}