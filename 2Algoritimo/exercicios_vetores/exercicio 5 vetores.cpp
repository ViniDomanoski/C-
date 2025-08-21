#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int i, certas=0, erradas=0;
	char gabarito[50], resposta[50];
	
	for(i=0; i<10; i++){
		printf("digite a alternativa %d do gabarito:\n", i+1);
		scanf("%s", &gabarito[i]);
		printf("Digite a alternativa que foi colocada na questão %d\n", i+1);
		scanf("%s", &resposta[i]);
		
		if(gabarito[i] == resposta[i]){
			certas = certas += 1;
		}else{
			erradas = erradas += 1;
		}
	}
	printf("Questões corretas: %d\n", certas);
	printf("Questoes incorretas: %d\n", erradas);
	
	return 0;
	
}
