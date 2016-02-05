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
 * @param[in] size		tamanho do array
 * @param[out] float[]	array de n�meros aleat�riso
 */
int* generateRandomArray(int size);


/*
 * @param[in] float		soma ponderada das entradas e pesos do neur�nio
 * @param[in] string	fun��o a ser utilizada. Por enquanto s� tanh como fun��o de ativa��o dispon�vel
 * @param[out] float	sa�da do neur�nio
 */
float activationFunction(float net, std::string function);


/*
 * @param[in] float		soma ponderada das entradas e pesos do neur�nio
 * @param[in] string		fun��o a ser utilizada para ativa��o. Aqui ser� utilizada a derivada. 
 *						Por enquanto s� tanh como fun��o de ativa��o dispon�vel
 * @param[out] float		sa�da do neur�nio
 */
float activFunDerivative(float net, std::string function);


/*
 * Programa principal
 */
void main();


/*
 * Programa principal
 */
void main2();