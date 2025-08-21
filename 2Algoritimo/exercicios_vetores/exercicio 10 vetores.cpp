#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
  	setlocale(LC_ALL, "Portuguese");
 	
	int i, x[10], y[10];
	
	for(i=0; i<10; i++){
		printf("Digite um numero qualquer:\n");
		scanf("%d", &x[i]);
		if(i % 2 == 0){
			y[i] = x[i]*2;
		}else{
			y[i] = x[i]*3;
		}
		printf("No vetor y posição %d, o resultado é %d. \n", i, y[i]);
	}
	
	return 0;
}
