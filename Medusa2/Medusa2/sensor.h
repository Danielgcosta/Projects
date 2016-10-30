#pragma once
#include <string>

#ifndef SENSOR_H
#define SENSOR_H

class Sensor
{
public:
	// Constructor and destructor
	Sensor(int port);
	~Sensor();

	// Mutator methods for sensor ports
	int getPort();
	void setPort( int port );

	// Gets type of the sensor
	virtual std::string getType() = 0;

	// Accesses the value of the sensor reading
	virtual float getValue() = 0;

private:

protected:
	// Function to evaluate the reading of the sensor
	// Each sensor will implement its own
	virtual void evaluate() = 0;

	// Port and sensor type
	int _port;
	std::string _type;

	// Registers the value read by the sensor
	float _value;
};

#endif