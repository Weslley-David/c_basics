#include <stdio.h>
#include <stdlib.h>

// Função para multiplicar
// Recebe dois inteiros (X,Y) e retorna um inteiro (X*Y)
int multiplicar(int X, int Y)
{
    return X*Y;
}

int main() 
{
	int x, y;
	printf("Digite um numero: ");
	scanf("%d",& x);
	printf("\nDigite um numero: ");
	scanf("%d",& y);
    printf("%d \n", multiplicar(x, y)); // Multiplica 5 x 3 e imprime o resultado
    system("pause");
    return 0;
}
