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

#include "main.h"
#include "stdio.h"
#include <iostream>
#include <string>
#include "Ultrassonic.h"

using namespace std;

int main() {
	cout << "selecione o tipo de Sensor: "<< endl;
	cout << "[0] Ultrassonic, [1] Thermal, [2] Ph, [3] DissolvedOxygen, [4] OxygenReduction " << endl;
	//enum SensorType {Ultrassonic, Thermal, Ph, DissolvedOxygen, OxygenReduction};
	//cin >> SensorType;

	cout << "selecione a porta do Sensor: " << endl;
	int sensorPort;
	cin >> sensorPort;	
	
	Ultrassonic* ultrassonic = new Ultrassonic(sensorPort);
	cout << "The selected Sensor was configured to port " << ultrassonic->getPort() << endl;
	cout << "The selected Sensor is of type " << ultrassonic->getType() << endl;


	int exitChar;
	cin >> exitChar;
}