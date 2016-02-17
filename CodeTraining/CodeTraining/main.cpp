/*
Neural Net
Algoritmo de Redes Neurais para previsão de séries em C++

28/01/2016
Daniel Guimarães Costa	
dcosta@ele.puc-rio.br
dcosta@tecgraf.puc-rio.br
*/

#include "stdafx.h"
#include "cstdio"	// C Standard Input and Output Library
#include "iostream"	// impressão/obtenção de dados do/para usuário
#include "string"
#include <vector>
#include "CodeTraining.h"

int main()
{
	auto matrix = CodeTraining::randomMatrixCreator(2, 3, -0.2, 0.2);

	return 0;
}