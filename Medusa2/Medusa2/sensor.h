#pragma once
#include <string>

#ifndef SENSOR_H
#define SENSOR_H

class Sensor
{
public:
	Sensor(int port);
	~Sensor();

	int getPort();
	void setPort( int port );

	virtual std::string getType() = 0;

private:

protected:
	int _port;
	std::string _type;
};

#endif