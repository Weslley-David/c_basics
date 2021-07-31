#include<stdlib.h>
#include<stdio.h>
int main()
{
	int dia;
	printf("Digite um numero de 1 a 7: \n");
	scanf("%d",& dia);
	switch(dia) {
	  case 1:
	  	printf("Domingo.\n");
	    // code block
	    break;
	  case 2:
	  	printf("Segunda.\n");
	    // code block
	    break;
	  case 3:
	  	printf("Terca.\n");
	    // code block
	    break;
	  case 4:
	  	printf("Quarta.\n");
	    // code block
	    break;
	  case 5:
	  	printf("Quinta.\n");
	    // code block
	    break;
	  case 6:
	  	printf("Sexta.\n");
	    // code block
	    break;
	  case 7:
	  	printf("Sabado.\n");
	    // code block
	    break;
	  default:
	    printf("Não ha data correspondente.\n");
	}
	system("pause");
	return 0;
}
