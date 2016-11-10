#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <list>

//Sensors
#include "SensorManager.h"
#include "DissolvedOxygen.h"
#include "OxygenReduction.h"
#include "PH.h"
#include "Sensor.h"
#include "Thermal.h"
#include "Ultrassonic.h"

using namespace std;

SensorManager::SensorManager()
{
	SensorList _sensorList;
}

SensorManager::~SensorManager()
{
}

void SensorManager::addSensor()
{
	std::cout << "Select sensor type: " << endl;
	std::cout << "[U]ltrassonic, [T]hermal, [P]h, [D]issolvedOxygen, [O]xygenReduction " << endl;
	char SensorType;
	std::cin >> SensorType;
	//getline(std::cin, SensorType);

	std::cout << "Select sensor port: " << endl;
	int sensorPort;
	std::cin >> sensorPort;

	bool unknownSensor = false;

	// Must create a default sensor or else it won't compile
	Ultrassonic* sensor = new Ultrassonic(0, 0);
	if (SensorType == 'U' || SensorType == 'u' ) {
		delete sensor;
		std::cout << "Select trigger port: " << endl;
		int triggerPort;
		std::cin >> triggerPort;
		Ultrassonic* sensor = new Ultrassonic(sensorPort, triggerPort);
	}
	else if (SensorType == 'T' || SensorType == 't')
	{
		delete sensor;
		Thermal* sensor = new Thermal(sensorPort);
	}
	else if (SensorType == 'O' || SensorType == 'o')
	{
		delete sensor;
		OxygenReduction* sensor = new OxygenReduction(sensorPort);
	}
	else if (SensorType == 'D' || SensorType == 'd')
	{
		delete sensor;
		DissolvedOxygen* sensor = new DissolvedOxygen(sensorPort);
	}
	else if (SensorType == 'P' || SensorType == 'p')
	{
		delete sensor;
		PH* sensor = new PH(sensorPort);
	}
	else
	{
		std::cout << "Unknown Sensor" << endl;
		unknownSensor = true;
	}

	if (!unknownSensor) {
		std::cout << "The selected Sensor was configured to port " << sensor->getPort() << endl;
		std::cout << "The selected Sensor is of type " << sensor->getType() << endl;
		std::cout << "The reading of this sensor is " << sensor->getValue() << endl;
		_sensorList.push_back(sensor);
	}	
}

SensorList SensorManager::getList()
{
	return _sensorList;
}