#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	
  	setlocale(LC_ALL, "Portuguese");
 	
	int i, j, a[4][4], b[4][4];
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
	printf("Digite o valor do elemento %d %d da matriz A: \n", i, j);
	scanf("%d", &a[i][j]);
		}
	}
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(i == j){
				b[i][j] = a[i][j] * 3;
			}else{
				b[i][j] = a[i][j] * 2;
			}
		}
	}
	printf("Matriz_A:\n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d ", a[i][j]);
		}
	}
	printf("\n\n");
	printf("Matriz_B:\n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d ", b[i][j]);
		}
	}
	
	return 0;
}
