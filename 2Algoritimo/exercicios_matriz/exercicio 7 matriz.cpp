#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main() {
	
  	setlocale(LC_ALL, "Portuguese");
 	
	float notas[3][3], media1=0.0, media2=0.0, media3=0.0, soma1=0.0, soma2=0.0, soma3=0.0;
	int i, j;
	int piornota1=0, piornota2=0, piornota3=0;

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
		printf("Informe a nota do aluno %d na prova %d: \n", i+1, j+1);
		scanf("%f", &notas[i][j]);
		}
	}
	for(i=0; i<3; i++){
		if(notas[i][0]<6.0){
			piornota1++;
		}
		if(notas[i][1]<6.0){
			piornota2++;
		}
		if(notas[i][2]<6.0){
			piornota3++;
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(i == 0){
				soma1 = soma1 + notas[i][j];
				media1 = soma1/3.0;
			}
			if(i == 1){
				soma2 = soma2 + notas[i][j];
				media2 = soma2/3.0;
			}
			if( i == 2){
				soma3 = soma3 + notas[i][j];
				media3= soma3/3.0;
			}
		}
	}
	printf("\nO numero de alunos com a pior nota na prova 1 é: %d.\n", piornota1);
	printf("O numero de alunos com a pior nota na prova 2 é: %d.\n", piornota2);
	printf("O numero de alunos com a pior nota na prova 3 é: %d.\n", piornota3);
	printf("\nA media do aluno 1 é: %.2f\n", media1);
	printf("A media do aluno 2 é: %.2f\n", media2);
	printf("A media do aluno 3 é: %.2f\n", media3);

	return 0;
}
