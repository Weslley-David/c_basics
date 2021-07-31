//variáveis
// inclusão de bibliotecas
#include<stdio.h> 			
#include<stdlib.h>			
int main()					
{
	float exe_float = 4.5;							   // declarando real
	int exe_int = 7;								   // declarando inteiro
	char exe_string[30] = "teste para ver se funciona";// declarando uma "string"
	
	//Existem outros tpos de dados, mas no geral, esses são mais que suficientes para diversas aplicações
	//Como veremos em um exemplo futuro, não é necessário declarar o valor de uma variável em sua criação
	
	/*Exibindo os dados com outputs
		Exibir um dado com printf  pode ser feito da seguinte forma:
		pritf("mensagem opcional %tipo do dado \n", variavel referente ao que deseja mostrar e correspondente ao tipo de dado que declarou)
	*/
	printf("exemplo de real	  : %.2f \n", exe_float);
	printf("exemplo de inteiro: %d \n", exe_int);
	printf("exemplo de string : %s \n", exe_string);	
	
	system("pause");
	return 0;
}
