/*
Neural Net
Algoritmo de Redes Neurais para previs�o de s�ries em C++

28/01/2016
Daniel Guimar�es Costa	
dcosta@ele.puc-rio.br
dcosta@tecgraf.puc-rio.br
*/

#include "stdafx.h"
#include "cstdio"	// C Standard Input and Output Library
#include "iostream"	// impress�o/obten��o de dados do/para usu�rio
#include "string"
#include <vector>
#include "CodeTraining.h"

int main()
{
	auto matrix = CodeTraining::randomMatrixCreator(2, 3, -0.2, 0.2);

	return 0;
}