#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
  	setlocale(LC_ALL, "Portuguese");
 	
	int i, j;
	int mat[3][3], maior=0, menor=9999;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Digite o valor da posição %d %d da matriz: \n", i, j);
			scanf("%d", &mat[i][j]);
				if(mat[i][j] > maior){
					maior = mat[i][j];
				}
				if(mat[i][j] < menor){
					menor = mat[i][j];
		}
	}
}
printf("O maior numero inserido foi: %d\n", maior);
printf("O menor numero inserido foi: %d\n", menor);
	
	return 0;
}
