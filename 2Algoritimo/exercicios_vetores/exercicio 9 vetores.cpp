#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<string.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int i, tamanho;
	float porcentagem, vogais=0;
	char nome[50];
	
	printf("Digite um nome qualquer: \n");
	scanf("%s", nome);
	tamanho = strlen(nome);
	
	for(i=0; i<tamanho; i++){
		if(nome[i] == 'a' || nome[i] == 'A' ||
			nome[i] == 'e' || nome[i] == 'E' ||
			nome[i] == 'i' || nome[i] == 'I' ||
			nome[i] == 'o' || nome[i] == 'O' ||
			nome[i] == 'u' || nome[i] == 'U'){
				vogais++;
			}
	}
	porcentagem = (vogais/tamanho)*100;
	
	printf("O nome citado tem %d vogais. \n", vogais);
	printf("O nome citado tem %d caracteres. \n", tamanho);
	printf("O nome citado tem %.2f%% de vogais. \n", porcentagem);
	
	return 0;
	
}
