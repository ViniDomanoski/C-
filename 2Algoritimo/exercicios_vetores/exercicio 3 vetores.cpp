#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int i;
	float notas[10], soma=0.0, media=0.0;

	for(i=0; i<10; i++){
		printf("Digite a nota do %d° aluno:\n", i+1);
		scanf("%f", &notas[i]);
	}
	for(i=0; i<10; i++){
		soma = soma += notas[i];
	}
	for(i=0; i<10; i++){
		printf("Aluno %d tirou: %.2f\n", i+1, notas[i]);
	}
	media = soma / 10;
	printf("A media de nota da turma é de: %.2f\n", media);

return 0;
}
