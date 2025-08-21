#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

struct info_eletrodomesticos{
	char nome[50];
	char marca[50];
	int garantia;
};
typedef struct info_eletrodomesticos info_eletrocomesticos;

struct info_pereciveis{
	char nome[50];
	char produto[50];
	int validade;
};
typedef struct info_pereciveis info_pereciveis;

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int i, num1, num2;
	info_eletrodomesticos eletro[num1];
	info_pereciveis pere[num2];
	
	printf("Quantos eletrodomesticos serão cadastrados: \n");
	scanf("%d", &num1);
	
	for(i=0; i<num1; i++){
		printf("Informe o nome do produto %d: \n", i+1);
		scanf("%[^\n]", eletro[i].nome);
		printf("Informe a marca do produto %d; \n", i+1);
		scanf("%[^\n]", eletro[i].marca);
		printf("Informe quantos anos o produto %d tem de garantia: \n", i+1);
		scanf("%d", &eletro[i].garantia);
		printf("\n\n");
	}
	
	printf("Quantos pereciveis serão cadastrador: \n");
	scanf("%d", &num2);
	
	for(i=0; i<num2; i++){
		printf("Informe o nome do usuario: \n");
		scanf("%[^\n]", pere[i].nome);
		printf("Informe o produto %d: \n", i+1);
		scanf("%[^\n]", pere[i].produto);
		printf("Informe quantos dias faltam pro produto %d vencer: \n", i+1);
		scanf("%d", &pere[i].validade);
		printf("\n\n");
	}
	
	printf("Eletrodomesticos cadastrados: \n");
	for(i=0; i<num1; i++){
		printf("Nome: %s\n", eletro[i].nome);
		printf("Marca: %s\n", eletro[i].marca);
		printf("Garantia em anos: %d \n", eletro[i].garantia);
		printf("\n\n");
	}
	
	printf("Pereciveis cadastrados: \n");
	for(i=0; i<num1; i++){
		printf("Nome do usuario: %s\n", pere[i].nome);
		printf("Produto: %s\n", pere[i].produto);
		printf("Validade em dias: %d \n", pere[i].validade);
		printf("\n\n");
	}
	
	return 0;
}
