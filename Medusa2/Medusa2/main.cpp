/*	Medusa 2.0 
	Rob� flutuante de acompanhamento ambiental

	Pontif�cia Universidade Cat�lica do Rio de Janeiro
	Departamento de Engenharia El�trica

	Aluno e desenvolvedor:
	Daniel Guimar�es Costa

	Orientadores:
	Marley Vellasco
	Karla Figueiredo
*/

#include "main.h"
#include "stdio.h"
#include <iostream>
#include <string>
#include "Sensor.h"

using namespace std;

int main() {


	cout << "selecione o tipo de Sensor: " << endl;
	string SensorType;
	getline(cin, SensorType);

	cout << "selecione a porta do Sensor: " << endl;
	int SensorPort;
	cin >> SensorPort;
	Sensor* ultrasonic1 = new Sensor(SensorPort);
	
	int returnPort = ultrasonic1->getPort();
	cout << "The selected Sensor was configured to port " << ultrasonic1->getPort() << endl;
	
	int exitChar;
	cin >> exitChar;

}


main::main()
{
	//if manualConfiguration
}

main::~main()
{
}


/*
int answer;
cout << "Ol�, quantos Sensores voc� vai usar?" << endl;
cin >> answer;
cout << "Sua resposta foi: " << answer << endl;

char confirm = '!';
while (confirm != 'S' && confirm != 'N' && confirm != 's' && confirm != 'n')
{
cout << "Confirma a quantidade? (S/N)" << endl;
cin >> confirm;
if (confirm != 'S' && confirm != 'N' && confirm != 's' && confirm != 'n') {
cout << "Resposta " << confirm << " inv�lida." << endl;
}
else if (confirm == 'n' || confirm == 'N') {
cout << "Digite a quantidade desejada: " << endl;
cin >> answer;
cout << "Sua resposta foi: " << answer << endl;
confirm = '!';
}
}

cout << "Quantidade de Sensores corretamente configurada." << endl;
int exitFlag;
cin >> exitFlag;
*/