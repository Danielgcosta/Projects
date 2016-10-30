/*	Medusa 2.0 
	Robô flutuante de acompanhamento ambiental

	Pontifícia Universidade Católica do Rio de Janeiro
	Departamento de Engenharia Elétrica

	Aluno e desenvolvedor:
	Daniel Guimarães Costa

	Orientadores:
	Marley Vellasco
	Karla Figueiredo
*/


// Como o programa está sendo criado no Visual Studio, algumas partes só funcionarão no Arduino,
// com os devidos sensores, logo, deve-se verificar o que deve ser descomentado antes de embarcar 
// o código para a plataforma

// OxygenReduction::evaluate()

#include "main.h"
#include "stdio.h"
#include <iostream>
#include <string>

//Sensors
#include "Ultrassonic.h"
#include "Thermal.h"
#include "OxygenReduction.h"
#include "DissolvedOxygen.h"
#include "PH.h"

using namespace std;

int main() {
	std::cout << "Medusa 2.0 danielgc@ele.puc-rio.br" << endl;
	std::cout << "Sensor type and port configuration" << endl << endl;
	std::cout << "Select sensor type: "<< endl;
	std::cout << "[U]ltrassonic, [T]hermal, [P]h, [D]issolvedOxygen, [O]xygenReduction " << endl;
	char SensorType;
	std::cin >> SensorType;
	//getline(std::cin, SensorType);
	
	std::cout << "Select sensor port: " << endl;
	int sensorPort;
	std::cin >> sensorPort;	
	
	Ultrassonic* sensor = new Ultrassonic(sensorPort);
	if (SensorType == 'U' || SensorType == 'u') {
		Ultrassonic* sensor = new Ultrassonic(sensorPort);
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
	}
	
	std::cout << "The selected Sensor was configured to port " << sensor->getPort() << endl;
	std::cout << "The selected Sensor is of type " << sensor->getType() << endl;
	std::cout << "The reading of this sensor is " << sensor->getValue() << endl;

	int exitChar;
	std::cin >> exitChar;
}


/*
	// For Oxygen Reduction sensor
	#include <SoftwareSerial.h>
	#define rx ?	//Possible ports: 10 to 15; 50 to 53; A8 to A15
	#define tx ? 
	SoftwareSerial orpSerial(rx, tx);
*/

void setup()
{
	// For Oxygen Reduction sensor
	// orpSerial.begin(9600);
}

void loop()
{

}