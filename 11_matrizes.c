#include<stdio.h>
#include<stdlib.h>
int main(){
	int vetor[5][5];
	int i = 0, i2 = 0;

	for(i; i < 5; i++){
		for(i2; i2 < 5; i2++){
			vetor[i][i2] = i;
		}
		i2 = 0;
	}
	i = 0, i2 = 0;
	
	for(i; i < 5; i++){
		for(i2; i2 < 5; i2++){
			printf("posicao [%d],[%d]: %d \n",i ,i2, vetor[i][i2]);
		}
		i2 = 0;
		printf("==================\n");
	}
}
