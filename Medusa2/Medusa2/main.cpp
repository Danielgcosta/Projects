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

int main() {
	std::cout << "Medusa 2.0 danielgc@ele.puc-rio.br" << endl;
	std::cout << "Sensor type and port configuration" << endl << endl;
	
	SensorManager* sensorManager = new SensorManager;
	sensorManager->addSensor();
	std::cout << "First Sensor Configured";



	sensorManager->addSensor();
	std::cout << "Second Sensor Configured";
	sensorManager->addSensor();
	std::cout << "Third Sensor Configured";

	int exitChar;
	std::cin >> exitChar;
}


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

void setup()
{
	// For Oxygen Reduction and dissolvedOxygen sensors
	// oxygenReductionSerial.begin(9600);
	// dissolvedOxygenSerial.begin(9600);
}

void loop()
{
	// Read sensors
	// Evaluate fuzzy trajectory avoidance
	// Activate motors (send data to Ardupilot)
	// Evaluate fuzzy alert
}