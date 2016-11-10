#pragma once
#include "Sensor.h"

#ifndef ULTRASSONIC_H
#define ULTRASSONIC_H

class Ultrassonic :	public Sensor
{
public:
	Ultrassonic(int port, int trigger);
	Ultrassonic(int port);
	~Ultrassonic();
	int getTrigger();
	void setTrigger(int port);
	std::string getType();
protected:
	int _triggerPort;
private:
	void evaluate();
};

#endif