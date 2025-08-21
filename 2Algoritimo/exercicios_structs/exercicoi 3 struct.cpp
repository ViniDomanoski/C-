#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

struct matricula_funcionario{
	int matricula;
	char nome[50];
	float salario;
};
typedef struct matricula_funcionario matricula_funcionario;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	matricula_funcionario funcionario[3];
	int i;
	float soma=0.0, media=0.0;
	
	for(i=0; i<3; i++){
		printf("Insira a matricula do funcionario %d: \n", i+1);
		scanf("%d", &funcionario[i].matricula);
		printf("Insira o nome do funcionario %d: \n", i+1);
		scanf("%s", funcionario[i].nome);
		printf("Insira o salario do funcionario %d: \n", i +1);
		scanf("%f", &funcionario[i].salario);
		soma = soma += funcionario[i].salario;
	}
		media = soma / 3;
		
	printf("\n\n");
	printf("Funcionarios com o salario acima da media: \n");
	for(i=0; i<3; i++){
		if(media < funcionario[i].salario){
			printf("Matricula: %d\n", funcionario[i].matricula);
			printf("Nome: %s\n", funcionario[i].nome);
			printf("Salario: %.2f\n", funcionario[i].salario);
		}
	}
	printf("\n\n");
	printf("Funcionarios com salario abaixo da media: \n");
	for(i=0; i<3; i++){
		if(media > funcionario[i].salario){
			printf("Matricula: %d\n", funcionario[i].matricula);
			printf("Nome: %s\n", funcionario[i].nome);
			printf("Salario: %.2f\n", funcionario[i].salario);
		}
	}
			
	return 0;	
}
