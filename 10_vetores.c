//Vetores
#include<stdio.h>
#include<stdlib.h>
int main(){
	int vetor[5];//declarando um vetor.
	int vetor2[5] = {1,2,3,4,5}; //declarando vetor com valores pré-definidos.
	int i = 0;
	//inserindo valores em um vetor.
	for(i; i < 5; i++){
		vetor[i] = i + 1;
	}
	//mostrando valores em um vetor.
	for(i = 0; i < 5; i++){
		printf("posicao %d: %d \n",i , vetor[i]);
	}
}
