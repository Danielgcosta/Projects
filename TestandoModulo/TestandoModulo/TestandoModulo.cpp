// TestandoModulo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// Para usar a fun��o cout, cin, endl
#include "iostream"
//Para usar a fun��o Sleep
#include <windows.h>
// Para que escreva os caracteres corretamente no console
#include "locale.h"

using namespace std;

int main()
{
	int i = 0;
	int val = 5;
	for (;; i++) {
		cout << "mod(" << i << "," << val << ") = " << i % val << endl;		
		if (! (i % val) ) {
			cout << "Entrou na fun��o 1." << endl;
		}
		if ( i % val == 0 ) {
			cout << "Entrou na fun��o 2." << endl;
		}
		Sleep(1000);
	}
    return 0;
}

