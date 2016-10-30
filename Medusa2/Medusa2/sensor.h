#pragma once
class Sensor
{
public:
	Sensor( int port );
	~Sensor();

	int getPort();
	void setPort( int port );

private:
	int _port;
};

