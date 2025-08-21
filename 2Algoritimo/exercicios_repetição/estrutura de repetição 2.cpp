#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int i, soma=0;
	
	for(i=6; i<=500; i=i+=2){
		soma = soma + i;
	}
	printf("A soma dos numeros pares e de: %d\n", soma);
	
	return 0;	
}
