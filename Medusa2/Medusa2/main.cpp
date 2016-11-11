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
// DissolvedOxygen::evaluate()

#include "main.h"
#include "stdio.h"
#include <iostream>
#include <string>
#include "SensorManager.h"

using namespace std;

/*
	// For Oxygen Reduction and dissolvedOxygen sensors
	#include <SoftwareSerial.h>
	#define oxygenReductionReceive ?	//Possible ports: 10 to 15; 50 to 53; A8 to A15
	#define oxygenReductionTransmit ?
	#define dissolvedOxygenReceive ?	//Possible ports: 10 to 15; 50 to 53; A8 to A15
	#define dissolvedOxygenTransmit ?
	SoftwareSerial oxygenReductionSerial(oxygenReductionReceive, oxygenReductionTransmit);
	SoftwareSerial dissolvedOxygenSerial(dissolvedOxygenReceive, dissolvedOxygenTransmit);
*/

void manualConfiguration()
{
	std::cout << "Manual Sensor Configuration" << std::endl;
	std::cout << "How many sensors are going to be used? ";
	unsigned int answer;
	std::cin >> answer;
	
	SensorManager* sensorManager = new SensorManager;	
	for (unsigned int sensor = 0; sensor < answer; sensor++)
	{		
		sensorManager->addSensor();		
	}
	//SensorList sensorList = sensorManager->getList();
	std::cout << "Finished configuring all sensors" << std::endl;
}

void automaticConfiguration()
{
	std::cout << "Automatic Sensor Configuration" << std::endl;
	SensorManager* sensorManager = new SensorManager;
	// Automatic configuration
	// 3 ultrasonic 
	// 2 thermal 
	// 1 oxygen reduction 
	// 1 dissolved oxygen
	// 1 ph
	sensorManager->addSensor('u', 1, 2);
	sensorManager->addSensor('u', 3, 4);
	sensorManager->addSensor('u', 5, 6);
	sensorManager->addSensor('t', 7);
	sensorManager->addSensor('t', 8);
	sensorManager->addSensor('o', 9);
	sensorManager->addSensor('d', 10);
	sensorManager->addSensor('p', 11);
	std::cout << "Finished configuring all sensors" << std::endl;
}

void setup()
{
	std::cout << "Medusa 2.0 danielgc@ele.puc-rio.br" << endl;
	std::cout << "Sensor type and port configuration" << endl << endl;

	//Serial.println("Medusa 2.0 danielgc@ele.puc-rio.br");
	//Serial.println("Sensor type and port configuration\n");

	// For Oxygen Reduction and Dissolved Oxygen sensors
	// oxygenReductionSerial.begin(9600);
	// dissolvedOxygenSerial.begin(9600);
	
	std::cout << "[A]utomatic or [M]anual sensor configuration? ";
	char answer;
	std::cin >> answer;

	if (answer == 'a' || answer == 'A') {
		automaticConfiguration();
	}
	else if (answer == 'm' || answer == 'M') {
		manualConfiguration();
	}
	else {
		std::cout << "Not an acceptable option" << std::endl;
	}
}

void loop()
{
	// Configure sensors
	// Read ultrasonic sensors
	// Evaluate fuzzy trajectory avoidance
	// Activate motors (send data to Ardupilot)

	// Every once in a while (1 in 100 occurences)
	// Read physicochemical sensors
	// Evaluate fuzzy alert
}

int main() {

	setup();
	loop();

	// Just to stop before finishing
	// Waits for a end character
	int exitChar;
	std::cin >> exitChar;
}