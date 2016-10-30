#pragma once
#include "Sensor.h"

#ifndef THERMAL_H
#define THERMAL_H

class Thermal : public Sensor
{
public:
	Thermal(int port);
	~Thermal();

	std::string getType();
};

#endif
