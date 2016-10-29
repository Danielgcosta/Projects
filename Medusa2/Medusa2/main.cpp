#include "main.h"
#include "stdio.h"
#include <iostream>

using namespace std;

int main() {
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
}


main::main()
{
}

main::~main()
{
}
