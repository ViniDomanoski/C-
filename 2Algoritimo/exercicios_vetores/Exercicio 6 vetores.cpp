#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int numero[10], i, soma=0, sub=0;
	
	for(i=0; i<10; i++){
		printf("Irnorme o %dº numero: \n", i+1);
		scanf("%d", &numero[i]);
		if(i % 2 == 0){
			soma = soma += numero[i];
		}else{
			sub = sub -= numero[i];
		}
	}
	
	printf("A soma dos numeros nas posições pares: %d\n", soma);
	printf("A subtração dos numeros nas posições impares: %d\n", sub);
	
	return 0;
	
}
