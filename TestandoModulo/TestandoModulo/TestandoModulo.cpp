// TestandoModulo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// Para usar a função cout, cin, endl
#include "iostream"
//Para usar a função Sleep
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
			cout << "Entrou na função 1." << endl;
		}
		if ( i % val == 0 ) {
			cout << "Entrou na função 2." << endl;
		}
		Sleep(1000);
	}
    return 0;
}

