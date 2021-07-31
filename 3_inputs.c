/* Este é um exemplo para demonstrar inputs em c++.
basicamente:
	scanf("tipo de dado (%s, % f, %d)",& variavel_associada_ao_scanf)
*/
#include<stdio.h> 			
#include<stdlib.h>			
int main()					
{
	char nome[15],sobrenome[15];//[15] dellimita a quantidade de caracteres possíveis na mensagem.
	printf("qual seu nome? ");
	scanf("%s",&nome);
	printf("qual seu sobreonome? ");
	scanf("%s",&sobrenome);
	printf("seu nome completo eh: %s %s\n", nome, sobrenome);
	system("pause");
	return 0;
}
