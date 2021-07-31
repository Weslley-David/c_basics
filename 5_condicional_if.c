#include<stdlib.h>
#include<stdio.h>
int main()
{
	int numero;
	printf("Numero: \n");
	scanf("%f",&numero);
	if (numero % 2 == 0)
	{
		printf("Par   \n");
	}
	else{
		printf("Impar \n");
	}
	system("pause");
	return 0;
}
