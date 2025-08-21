#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portugrese");

	int vetor[10], i;
	
	for(i=0; i<10; i++){
		printf("Digite o %d° numero:\n", i+1);
		scanf("%d", &vetor[i]);
	}
	printf("Numeros pares e seus indices: \n");
	for(i=0; i<10; i++){
		if(vetor[i] % 2 == 0){
			printf("%d  indice %d \n", vetor[i], i);
		}
	}
	printf("Numeros impares e seus indices: \n");
	for(i=0; i<10; i++){
		if(vetor[i] % 2 != 0){
			printf("%d  indice %d \n", vetor[i], i);
		}
	}
return 0;

}
