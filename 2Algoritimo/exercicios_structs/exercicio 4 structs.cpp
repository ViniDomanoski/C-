#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

struct info_aluno{
	char nome[50];
	int rgm;
	int ano;
	int idade;
};
typedef struct info_aluno info_aluno;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, comp;
	info_aluno aluno[3];
	float soma_idade = 0.0, media = 0.0;
	
	printf("Informe um ano para comparação: \n");
	scanf("%d", &comp);
	
	for(i=0; i<3; i++){
		printf("Insira o nome do aluno %d: \n", i+1);
		scanf("%s", aluno[i].nome);
		printf("Insira o rgm do aluno %d: \n", i +1);
		scanf("%d", &aluno[i].rgm);
		printf("Insira o ano em que o aluno %d nasceu: \n", i+1);
		scanf("%d", &aluno[i].ano);
		printf("Insira a idade atual do aluno %d: \n", i+1);
		scanf("%d", &aluno[i].idade);
		
		soma_idade = soma_idade += aluno[i].idade;
	}
	
	media = soma_idade / 3;
	
	printf("Alunos cadastrados: \n");
	for(i=0; i<3; i++){
		printf("Nome: %s \n", aluno[i].nome);
		printf("RGM: %d \n", aluno[i].rgm);
		printf("Idade: %d \n", aluno[i].idade);
		printf("\n\n");
	}
	printf("Media de idade entre os alunos: %.2f \n", media);
	
	printf("Alunos nascidos após o ano citado: \n");
	for(i=0; i<3; i++){
		if(comp < aluno[i].ano){
			printf("Nome: %s \n", aluno[i].nome);
			printf("RGM: %d \n", aluno[i].rgm);
			printf("Idade: %d \n", aluno[i].idade);
			printf("Ano de nascimento: %d \n", aluno[i].ano);
		}
	}
	
	return 0;
}
