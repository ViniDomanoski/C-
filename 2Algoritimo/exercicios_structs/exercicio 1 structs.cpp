#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

struct carro{
	char marca[20];
	int ano;
	float preco;
};
typedef struct carro carro;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float comp = 999999.99;
	carro cliente[3];
	
	printf("insira o preço de comparação: ");
	scanf("%f", &comp);
	
	for(i=0; i<3; i++){
		printf("Insira a marca do carro %d: \n", i+1);
		scanf("%s", &cliente[i].marca);
		printf("Insira o ano do carro %d: \n", i+1);
		scanf("%d", &cliente[i].ano);
		printf("Insira o preço do carro %d: \n", i+1);
		scanf("%f", &cliente[i].preco);
	}
	
	printf("Carros disponiveis abaixo do preço citado: \n\n");
	
	for(i=0; i<3; i++){
		if(comp > cliente[i].preco){
			printf("Macra: %s \n", cliente[i].marca);
			printf("Ano: %d \n", cliente[i].ano);
			printf("Preço: %.2f \n", cliente[i].preco);
			printf("\n\n");
		}
	}
	
	return 0;	
}
