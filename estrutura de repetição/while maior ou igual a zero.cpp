#include <stdio.h>
#include <stdlib.h>

int main (){

int n;

	printf("Digite um numero maior que zero: ");
	scanf("%d", &n);
	
	while(n <= 0){
		printf("Numero invalido! Digite um numero maior que zero: ");
		scanf("%d", &n);
	}
	
	printf("Numero digitado: %d", n);
}
