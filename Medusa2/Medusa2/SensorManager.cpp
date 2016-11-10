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
	char sensorType;
	std::cin >> sensorType;
	//getline(std::cin, sensorType);

	std::cout << "Select sensor port: " << endl;
	int sensorPort;
	std::cin >> sensorPort;

	bool unknownSensor = false;

	// Must create a default sensor or else it won't compile
	Ultrassonic* sensor = new Ultrassonic(0, 0);
	if (sensorType == 'U' || sensorType == 'u' ) {
		delete sensor;
		std::cout << "Select trigger port: " << endl;
		int triggerPort;
		std::cin >> triggerPort;
		Ultrassonic* sensor = new Ultrassonic(sensorPort, triggerPort);
	}
	else if (sensorType == 'T' || sensorType == 't')
	{
		delete sensor;
		Thermal* sensor = new Thermal(sensorPort);
	}
	else if (sensorType == 'O' || sensorType == 'o')
	{
		delete sensor;
		OxygenReduction* sensor = new OxygenReduction(sensorPort);
	}
	else if (sensorType == 'D' || sensorType == 'd')
	{
		delete sensor;
		DissolvedOxygen* sensor = new DissolvedOxygen(sensorPort);
	}
	else if (sensorType == 'P' || sensorType == 'p')
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
		std::cout << "The selected " << sensor->getType() << " Sensor was configured to port " << sensor->getPort() << endl;
		std::cout << "Its reading are: " << sensor->getValue() << std::endl;
		_sensorList.push_back(sensor);
		std::cout<< std::endl;
	}	
}

void SensorManager::addSensor(char sensorType, int sensorPort, int additionalPort)
{
	Ultrassonic* sensor = new Ultrassonic(0, 0);
	if (sensorType == 'U' || sensorType == 'u') {
		delete sensor;
		Ultrassonic* sensor = new Ultrassonic(sensorPort, additionalPort);
	}
	else if (sensorType == 'T' || sensorType == 't')
	{
		delete sensor;
		Thermal* sensor = new Thermal(sensorPort);
	}
	else if (sensorType == 'O' || sensorType == 'o')
	{
		delete sensor;
		OxygenReduction* sensor = new OxygenReduction(sensorPort);
	}
	else if (sensorType == 'D' || sensorType == 'd')
	{
		delete sensor;
		DissolvedOxygen* sensor = new DissolvedOxygen(sensorPort);
	}
	else if (sensorType == 'P' || sensorType == 'p')
	{
		delete sensor;
		PH* sensor = new PH(sensorPort);
	}
	else
	{
		delete sensor;
		std::cout << "Unknown Sensor" << endl;
	}
}

SensorList SensorManager::getList()
{
	return _sensorList;
}