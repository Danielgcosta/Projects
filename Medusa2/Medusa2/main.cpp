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

using namespace std;

int main() {
	cout << "selecione o tipo de Sensor: "<< endl;
	cout << "[0] Ultrassonic, [1] Thermal, [2] Ph, [3] DissolvedOxygen, [4] OxygenReduction " << endl;
	
	cout << "selecione o tipo de Sensor: " << endl;
	string SensorType;
	getline(cin, SensorType);
	
	cout << "selecione a porta do Sensor: " << endl;
	int sensorPort;
	cin >> sensorPort;	
	
	if (SensorType == "Ultrassonic") {
		Ultrassonic* sensor = new Ultrassonic(sensorPort);
	}
	else //(SensorType == "Thermal")
	{
		Thermal* sensor = new Thermal(sensorPort);
	}


	//cout << "The selected Sensor was configured to port " << sensor->getPort() << endl;
	//cout << "The selected Sensor is of type " << sensor->getType() << endl;

	int exitChar;
	cin >> exitChar;
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