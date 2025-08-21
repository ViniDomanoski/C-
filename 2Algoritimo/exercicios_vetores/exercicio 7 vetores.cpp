#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int i, numero[15], maior=0;
	
	for(i=0; i<15; i++){
		printf("Digite um numero: \n");
		scanf("%d", &numero[i]);
		
		if(numero[i] > maior){
			maior = numero[i];
		}
	}
	
	printf("O maior numero inserido foi: %d\n", maior);
	
	return 0;
	
}
