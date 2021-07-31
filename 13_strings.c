#include <stdio.h>
#include <stdlib.h>
#include <string.h>//importando biblioteca para trabalhar com strings

// Strings
int main() 
{
	char exe_string[30] = "Frase de teste.";// declarando uma "string"
	char exe_string_2[30] = "O teste foi bem sucedido.";
	printf("Tamanho: %d \n",strlen(exe_string));// retorna o tamanho de uma string
	printf("Frases concatenadas: %s \n",strcat(exe_string, exe_string_2));//concatenando frases
	printf("Frases sao diferentes? %d \n",strcmp (exe_string, exe_string_2));// compara dois conteúdos de variáveis e analiza se são iguais. 0 caso igual.
	
    system("pause");
    return 0;
}
