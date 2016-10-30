#pragma once
class sensor
{
public:
	sensor( int port );
	~sensor();

	int getPort();
	void setPort( int port );

private:
	int _port;
};

