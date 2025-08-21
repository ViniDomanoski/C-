#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int n;

	
	do {
		printf("Digite um numero maior que zero: \n");
		scanf("%d", &n);
	}while(n <= 0);
	
	printf("O numero digitado foi: %d", n);
}
