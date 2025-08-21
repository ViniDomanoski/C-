#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	
  	setlocale(LC_ALL, "Portuguese");
 	
	int i, j;
	float mat[5][2];
	float celsius[5][2];
	
	for(i = 0; i < 5; i = i + 1)
	{
		for(j = 0; j < 2; j = j + 1)
		{
			printf("Digite o valor da posição %d %d em graus Farenheit: ", i, j);
			scanf("%f", &mat[i][j]);
			
			celsius[i][j] = ((5*(mat[i][j] - 32))/9);
		}
	}
	
	printf("Temperaturas convertidas para graus Celsius:\n\n");
	for(i = 0; i < 5; i = i + 1)
	{
		for(j = 0; j < 2; j = j + 1)
		{
			printf("%.2f\t", celsius[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
