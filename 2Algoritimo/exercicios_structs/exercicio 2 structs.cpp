#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

struct tipo_livro{
	char nome[50];
	int ano;
	float paginas;
	float preco;
};
typedef struct tipo_livro tipo_livro;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	tipo_livro livro[5];
	int i;
	float media=0.0, maior=0.0, total_paginas=0.0;
	char livromaior[50];
	
	for(i=0; i<5; i++){
		printf("Insira o nome do livro %d: \n", i+1);
		scanf("%s", livro[i].nome);
		printf("Insira o ano da edição do livro %d: \n", i+1);
		scanf("%d", &livro[i].ano);
		printf("Insira o numero de paginas presentes no livro %d: \n", i+1);
		scanf("%f", &livro[i].paginas);
		printf("Insira o preço do livro %d: \n", i+1);
		scanf("%f", &livro[i].preco);
		
		total_paginas = total_paginas += livro[i].paginas;
		
		if(maior < livro[i].preco){
			maior = livro[i].preco;
			strcpy(livromaior, livro[i].nome);
		}
	}
	
	media = total_paginas / 5;
	
	printf("A media de pagina dos livros é: %.2f \n", media);
	printf("O livro com o maior preço é: %s", livromaior);
	
	return 0;	
}
