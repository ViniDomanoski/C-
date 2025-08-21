#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main() {
	
  	setlocale(LC_ALL, "Portuguese");
 	
	int i, j, m[3][3], n[3][3], mult[3][3];
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Insira o valor %d %d da matriz M: \n", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Insira o valor %d %d da matriz N: \n", i, j);
			scanf("%d", &n[i][j]);
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			mult[i][j] = m[i][j] * n[i][j];
		}
	}
	printf("\n");
	
	printf("\nMatriz M: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ", m[i][j]);
		}
	printf("\n");
	}
	printf("\nMatriz N: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ", n[i][j]);
		}
	}
	printf("\n");
	printf("\nMatriz Mult: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ", mult[i][j]);
		}
	}

	return 0;
}
