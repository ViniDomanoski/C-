#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	
setlocale(LC_ALL, "Portuguese");

	int i;
	float nota[20];
	
	for(i=0; i<20; i++){
		printf("Digite a nota do %d° aluno:\n", i+1);
		scanf("%f", &nota[i]);
	}
	for(i=0; i<20; i++){
		if(nota[i] >= 7.5){
			printf("Aluno %d tirou: %.2f\n", i+1, nota[i]);
		}
	}
	

return 0;
}
