#pragma once
#include <vector>
#include <string>
#include "Sensor.h"
#include <list>

typedef std::list <Sensor*> SensorList;

class SensorManager
{
public:
	SensorManager();
	~SensorManager();

	// Adds a sensor to the table
	void addSensor();
	void addSensor(char sensorType, int sensorPort, int additionalPort = 0);
	SensorList getList();
	
protected:
	// sensor name and sensor object table
	SensorList _sensorList;
private: 	
};