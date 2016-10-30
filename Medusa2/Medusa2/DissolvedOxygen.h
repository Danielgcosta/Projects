#pragma once
#include "Sensor.h"

#ifndef DISSOLVEDOXYGEN_H
#define DISSOLVEDOXYGEN_H

class DissolvedOxygen : public Sensor
{
public:
	DissolvedOxygen(int port);
	~DissolvedOxygen();

	std::string getType();
};

#endif

