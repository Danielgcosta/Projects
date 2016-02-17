public:
{
	/*
	 * @param[in] limit_a		primeiro limitador
	 * @param[in] limit_b		segundo limitador
	 * @param[out] randomNumber	n�mero aleat�rio entre dois n�meros
	 */
	float getRandomBetween(float limitA, float limitB);

	/*
	 * @param[in] arrayOfValues[]	array com os valores aleat�rios
	 * @param[out] maximumValue		maior valor do conjunto
	 */
	float getMax(float arrayOfValues[]);


	/*
	 * @param[in] arrayOfValues[]	array com os valores aleat�rios
	 * @param[out] minimumValue		menor valor do conjunto
	 */
	float getMin(float arrayOfValues[]);


	/*
	 * @param[in] int rows		n�mero de linhas
	 * @param[in] int columns	n�mero de colunas
	 * @param[in] float randomLowerBound	limite inferior do n�mero aleat�rio
	 * @param[in] float randomUpperBound	limite superior do n�mero aleat�rio
	 * @param[out] vector<vector<float>>	matriz aleat�ria
	 */
	 //vector<vector<float>> randomMatrixCreator(int rows, int columns, float randomLowerBound, float randomUpperBound);


	 ///*
	 // * @param[in] float		soma ponderada das entradas e pesos do neur�nio
	 // * @param[in] string	fun��o a ser utilizada. Por enquanto s� tanh como fun��o de ativa��o dispon�vel
	 // * @param[out] float	sa�da do neur�nio
	 // */
	 //float activationFunction(float net, std::string function);
	 //
	 //
	 ///*
	 // * @param[in] float		soma ponderada das entradas e pesos do neur�nio
	 // * @param[in] string		fun��o a ser utilizada para ativa��o. Aqui ser� utilizada a derivada. 
	 // *						Por enquanto s� tanh como fun��o de ativa��o dispon�vel
	 // * @param[out] float		sa�da do neur�nio
	 // */
	 //float activFunDerivative(float net, std::string function);
	 //
	 //
	 ///*
	 // * Programa principal
	 // */
	 //void main();
	 //
	 //
	 ///*
	 // * Programa principal
	 // */
	 //void main2();
}