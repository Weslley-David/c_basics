//Operadores aritméticos
#include<stdio.h> 			
#include<stdlib.h>			
int main()					
{
	int numero_1 = 5, numero_2 = 2;
	float soma, subtracao, multiplicacao, divisao, modulo, exponenciacao;
	
	soma = (numero_1 + numero_2);
	subtracao = (numero_1 - numero_2);
	multiplicacao = (numero_1 * numero_2);
	divisao = (numero_1 / numero_2);
	modulo = (numero_1 % numero_2);
	exponenciacao = (numero_1^numero_2);
	
	printf("soma: 			%0.2f \n", soma);
	printf("subtracao: 		%0.2f \n", subtracao);
	printf("multiplicacao: 		%0.2f \n", multiplicacao);
	printf("divisao: 		%0.2f \n", divisao);
	printf("modulo: 		%0.2f \n", modulo);
	printf("exponenciacao: 		%0.2f \n", exponenciacao);
	system("pause");
	return 0;
}
