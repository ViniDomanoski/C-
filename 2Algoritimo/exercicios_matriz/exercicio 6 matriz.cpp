#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main() {
	
  	setlocale(LC_ALL, "Portuguese");
 	
	int i, j, soma1=0, soma2=0, matriz[7][7];
	
	for(i=0; i<7; i++){
		for(j=0; j<7; j++){
			printf("Insira o valor do elemento %d %d da matriz: \n", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("\n");
	printf("Matriz:\n");
	for(i=0; i<7; i++){
		for(j=0; j<7; j++){
			printf("%d ", matriz[i][j]);
		}
	}
	printf("\n");
	for(i=0; i<7; i++){
		for(j=0; j<7; j++){
			if(i<j){
				soma1 = soma1 += matriz[i][j];
			}else if(i>j){
				soma2 = soma2 += matriz[i][j];
			}
		}
	}
	printf("A soma dos numeros acima da diagonal principal é: %d\n", soma1);
	printf("A soma dos numeros abaixo da diagonal principal é: %d\n", soma2);

	return 0;
}
