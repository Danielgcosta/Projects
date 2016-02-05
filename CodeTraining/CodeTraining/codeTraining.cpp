#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "CodeTraining.h"
#include "string"

using namespace std;

// tamanho máximo de array aleatório
static const long int SIZELIMIT = 250000;
// taxa de aprendizado
static const float LEARNRATE = 0.3f;
// tolerância 
static const float TOLERANCE = .01f;
// tamanho da janela
static const int WINDOW = 5;	

float CodeTraining::getRandomBetween(float limitA, float limitB)
{
	float randomNumber = 2*static_cast<float>(rand()/( pow(2,15)-1 ))-1;	// [ -1 ; 1 ]
	return ((limitB - limitA)*randomNumber  + (limitA + limitB) )/ 2;	// [ limit_a ; limit_b ]
}

float CodeTraining::getMax(float arrayOfValues[])
{
	float maximumValue = static_cast<float>(-INFINITY);
	for (unsigned int i = 0; i <SIZELIMIT; i++)
	{
		//std::cout << arrayOfValues[i] << std::endl;
		if (arrayOfValues[i] > maximumValue)
		{
			maximumValue = static_cast<float>(arrayOfValues[i]);
			//std::cout << "Maximum: " << maximumValue << std::endl;
		}
	}
	return maximumValue;
}

float CodeTraining::getMin(float arrayOfValues[])
{
	float minimumValue = static_cast<float>(INFINITY);
	for (unsigned int i = 0; i < SIZELIMIT; i++)
	{
		if (arrayOfValues[i] < minimumValue)
		{
			minimumValue = static_cast<float>(arrayOfValues[i]);
		}
	}
	return minimumValue;
}

int* CodeTraining::generateRandomArray(int size)
{
	// ARRAYS DINÂMICOS ?????????????????????????????????????????????????????????????
	// SUBSTITUIR ARRAY POR VETOR ??????????????????????????????????????????????????? push_back, size, etc
	for (int i = 0; i < size; i++)
	{
		float randomNumber = getRandomBetween(-0.25, 0.25);
		//std::cout << randomNumber << std::endl;
		float arrayOfRandomValues[i] = randomNumber;
	}
	return arrayOfRandomValues;
}
	 float max = getMax(arrayOfRandomValues);

void CodeTraining::getBytes(float number)
{
	int numberOfBits = sizeof(number) / sizeof(float); //NÃO!
	int numberOfBytes = (numberOfBits - fmod(sizeof(arrayOfRandomValues) / sizeof(float),8))
	int bits[int numberOfBits];
	int bytes[int numberOfBytes];
	for (unsigned int i = 0; i < bits; i++ )
	{
		if ( fmod(max, 2) == 0 )
		{
			bits[i] = 1;
		}
		else
		{
			bits[i] = 0;
		}
		max = max / 2;
		std::cout << bits[i];
	}

	// std::cout << "\nMinimum: " << getMin(arrayOfRandomValues) << std::endl;
	// std::cout << "Maximum: " << getMax(arrayOfRandomValues) << std::endl;
	return arrayOfRandomValues;
}

float CodeTraining::activationFunction(float net, string function)
{
	return tanh(net);
}

float CodeTraining::activFunDerivative(float net, string function)
{
	return 1 / (pow(cosh(net), 2));	//sech²(net);
}

void CodeTraining::main2()
{
	// inputs
	float _input[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30 };
	float _hiddenLayerWeights[3][4];
	float _hiddenLayerWeightAdjustment[3][4];
	float _outputLayerWeights[4];
	float _outputLayerWeightAdjustment[4];
	float S[] = { 0,0,0 };

	float hiddenLayerWeightAcumulation[3][4] = {};
	float outputLayerWeightAcumulation[4] = { 0,0,0,0 };

	float limit_a = -0.25f;
	float limit_b = 0.25f;
	
	float sqrDifError = static_cast<float>(INFINITY);
	while (sqrDifError > TOLERANCE)
	{
		for (int iter = 0; WINDOW + iter < sizeof(_input) / sizeof(float); iter++)
		{
			// Inicialização dos pesos	
			// Pesos das camadas escondidas
			// Exemplo: 
			// 1 camada escondida, 3 neurônios nas camadas escondidas e 1 na de saída
			// peso, peso, peso, bias
			for (unsigned int i = 0; i < 3; i++)
			{
				for (unsigned int j = 0; j < 4; j++)
				{
					_hiddenLayerWeights[i][j] = getRandomBetween(limit_a, limit_b);
				}
			}

			// Pesos da camada de saída
			for (unsigned int i = 0; i < 4; i++)
			{
				_outputLayerWeights[i] = getRandomBetween(limit_a, limit_b);
			}

			// Somas ponderadas somadas ao bias
			// Net_j = Soma( w_i_j * x_i ) + bias_j
			float net[] = { 0,0,0 };

			// net[0] = _w1[0] * _input[0] + _w1[1] * _input[1] + _w1[2] * _input[2] + _w1[3];
			for (unsigned int i = 0; i < 3; i++)
			{
				float sum = 0;
				for (unsigned int j = 0; j < 3; j++)
				{
					sum = sum + _hiddenLayerWeights[i][j] * _input[j + iter];
				}
				net[i] = sum + _hiddenLayerWeights[i][3];
			}

			// Ativações dos neurônios
			for (unsigned int i = 0; i < 3; i++)
			{
				S[i] = activationFunction(net[i]);
			}

			// Saída da rede
			float sum = 0;
			for (unsigned int i = 0; i < 3; i++)
			{
				sum = sum + _outputLayerWeights[i] * S[i];
			}
			float net_out = sum + _outputLayerWeights[3];
			float output = activationFunction(net_out);


			// Erro dos pesos da camada de saída
			// e_j = ( target - output ) * F'((net_j)
			float outputError = (_input[WINDOW + iter] - output) * activFunDerivative(net_out);
			for (unsigned int i = 0; i < 3; i++)
			{
				_outputLayerWeightAdjustment[i] = LEARNRATE * outputError * S[i];
			}
			_outputLayerWeightAdjustment[3] = LEARNRATE * outputError * _outputLayerWeights[3];

			// Erro dos pesos da camada escondida
			// e_j = ( sum( e_k * w_k_j ) * F'(net_j)
			float hiddenLayerError[3] = { 0, 0, 0 };
			for (unsigned int i = 0; i < 3; i++)
			{
				float sum = 0;
				for (unsigned int j = 0; j < 4; j++)
				{
					sum = sum + _outputLayerWeights[j];
				}
				hiddenLayerError[i] = sum * activFunDerivative(net[i]);
			}
			for (unsigned int i = 0; i < 3; i++)
			{
				for (unsigned int j = 0; j < 4; j++)
				{
					_hiddenLayerWeightAdjustment[i][j] = LEARNRATE * _input[j] * hiddenLayerError[i];
					//std::cout << _hiddenLayerWeightAdjustment[i][j] << std::endl;
				}
			}

			// Acumulando os erros dos pesos para corrigir após apresentar todos os padrões
			for (unsigned int i = 0; i < 3; i++)
			{
				for (unsigned int j = 0; j < 4; j++)
				{
					hiddenLayerWeightAcumulation[i][j] = hiddenLayerWeightAcumulation[i][j] + _hiddenLayerWeightAdjustment[i][j];
					outputLayerWeightAcumulation[j] = outputLayerWeightAcumulation[j] + _outputLayerWeightAdjustment[j];
				}
			}
			// MOSTROU UM PADRÃO
		}
		// MOSTROU TODOS OS PADRÕES

		// Correção dos pesos 
		for (unsigned int i = 0; i < 3; i++)
		{
			for (unsigned int j = 0; j < 4; j++)
			{
				_hiddenLayerWeights[i][j] = _hiddenLayerWeights[i][j] + hiddenLayerWeightAcumulation[i][j];
				_outputLayerWeights[j] = outputLayerWeightAcumulation[j];
			}
		}

		// Tabela de visualização da matrix dos pesos
		{
			std::cout << "\n        |  W_i1    |  W_i2   |   W_i3  |   bias_i |";
			for (unsigned int i = 0; i < 3; i++)
			{
				std::cout << "\nINPUT " << i + 1 << " | ";
				for (unsigned int j = 0; j < 4; j++)
				{
					std::cout << _hiddenLayerWeights[i][j] << " | ";
				}
			}
		}
		
		// Calculando o erro das avaliações
		float error[30 - WINDOW];
		for (unsigned int p = 0; p < 30 - WINDOW; p++)
		{
			float sum2 = 0;
			for (unsigned int i = 0; i < 3; i++)
			{
				float sum3 = 0;
				for (unsigned j = 0; j < 4; j++)
				{
					sum3 = sum3 + _input[j] * _hiddenLayerWeights[i][j];
				}
				S[i] = sum3 + _hiddenLayerWeights[i][3];
				sum2 = sum2 + S[i] * _outputLayerWeights[i];
			}
			float output = sum2 + _outputLayerWeights[4];
			error[p] = output - _input[p + WINDOW];
			sqrDifError = sqrDifError + error[p] * error[p];
		}
	}
	return;
}

void CodeTraining::main()
{

}