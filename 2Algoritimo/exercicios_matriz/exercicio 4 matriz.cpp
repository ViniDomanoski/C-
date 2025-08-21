#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main() {
	
  	setlocale(LC_ALL, "Portuguese");
 	
	int i, j, a[4][4], b[4][4], c[4][4];
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("Informe o valor da posição %d %d da matriz A:\n", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("Informe o valor da posição %d %d da matriz B:\n", i, j);
			scanf("%d", &b[i][j]);
		}
	}
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			c[i][j] = a[i][j] += b[i][j];
		}
	}
	printf("\nMatriz A: \n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d ", a[i][j]);
		}
	}
	printf("\nMatriz B: \n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d ", b[i][j]);
		}
	}
	printf("\nMatriz C; \n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d ", c[i][j]);
		}
	}
	

	return 0;
}
