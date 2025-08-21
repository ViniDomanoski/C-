#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<string.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	char nome[50];
	int i, tamanho, vezes=0;
	
	printf("Informe um nome:\n");
	scanf("%s", nome);
	
	tamanho = strlen(nome);
	
	for(i=0; i<tamanho; i++){
		if(nome[i] == 'a' || nome[i] == 'A'){
			vezes++;
		}
	}
	printf("O nome %s tem %d letras 'A's", nome, vezes);
	
	return 0;
	
}
