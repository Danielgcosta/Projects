#pragma once
#include "Sensor.h"

#ifndef ULTRASSONIC_H
#define ULTRASSONIC_H

class Ultrassonic :	public Sensor
{
public:
	Ultrassonic(int port);
	~Ultrassonic();

	std::string getType();

	
private:
	float _distance;
};

#endif

