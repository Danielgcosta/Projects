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
#include "sensor.h"

using namespace std;

int main() {


	cout << "selecione o tipo de sensor: " << endl;
	string sensorType;
	getline(cin, sensorType);

	cout << "selecione a porta do sensor: " << endl;
	int sensorPort;
	cin >> sensorPort;
	sensor* ultrasonic1 = new sensor(sensorPort);
	
	int returnPort = ultrasonic1->getPort();
	cout << "The selected sensor was configured to port " << ultrasonic1->getPort() << endl;
	
	int exitChar;
	cin >> exitChar;

}


main::main()
{
	if manualConfiguration
}

main::~main()
{
}


/*
int answer;
cout << "Olá, quantos sensores você vai usar?" << endl;
cin >> answer;
cout << "Sua resposta foi: " << answer << endl;

char confirm = '!';
while (confirm != 'S' && confirm != 'N' && confirm != 's' && confirm != 'n')
{
cout << "Confirma a quantidade? (S/N)" << endl;
cin >> confirm;
if (confirm != 'S' && confirm != 'N' && confirm != 's' && confirm != 'n') {
cout << "Resposta " << confirm << " inválida." << endl;
}
else if (confirm == 'n' || confirm == 'N') {
cout << "Digite a quantidade desejada: " << endl;
cin >> answer;
cout << "Sua resposta foi: " << answer << endl;
confirm = '!';
}
}

cout << "Quantidade de sensores corretamente configurada." << endl;
int exitFlag;
cin >> exitFlag;
*/