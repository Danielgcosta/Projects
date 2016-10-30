#pragma once
#include "Sensor.h"

#ifndef OXYGENREDUCTION_H
#define OXYGENREDUCTION_H

class OxygenReduction :	public Sensor
{
public:
	OxygenReduction(int port);
	~OxygenReduction();

	std::string getType();
};

#endif