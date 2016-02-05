/*
 * @param[in] limit_a		primeiro limitador
 * @param[in] limit_b		segundo limitador
 * @param[out] randomNumber	número aleatório entre dois números
 */
float getRandomBetween(float limitA, float limitB);

/*
 * @param[in] arrayOfValues[]	array com os valores aleatórios
 * @param[out] maximumValue		maior valor do conjunto
 */
float getMax(float arrayOfValues[]);


/*
 * @param[in] arrayOfValues[]	array com os valores aleatórios
 * @param[out] minimumValue		menor valor do conjunto
 */
float getMin(float arrayOfValues[]);


/*
 * @param[in] size		tamanho do array
 * @param[out] float[]	array de números aleatóriso
 */
int* generateRandomArray(int size);


/*
 * @param[in] float		soma ponderada das entradas e pesos do neurônio
 * @param[in] string	função a ser utilizada. Por enquanto só tanh como função de ativação disponível
 * @param[out] float	saída do neurônio
 */
float activationFunction(float net, std::string function);


/*
 * @param[in] float		soma ponderada das entradas e pesos do neurônio
 * @param[in] string		função a ser utilizada para ativação. Aqui será utilizada a derivada. 
 *						Por enquanto só tanh como função de ativação disponível
 * @param[out] float		saída do neurônio
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