#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int num, i;
	
	printf("TABOADA\n");
	printf("Digite um numero inteiro entre 1 e 10:\n");
	scanf("%d", &num);
	
	while( num < 1 || num > 10){
		printf("Numero invalido! Digite um numero entre 1 e 10: \n");
		scanf("%d", &num);
	}
	
	for( i = 1; i <= 10; i++){
		printf("%d * %d = %d\n", i, num, num * i);
	}
 
}
