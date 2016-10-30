#pragma once
#include "Sensor.h"

#ifndef PH_H
#define PH_H

class PH : public Sensor
{
public:
	PH(int port);
	~PH();

	std::string getType();
};

#endif