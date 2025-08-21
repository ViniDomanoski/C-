#include <stdio.h>

int main(){
	
	int n1, n2, n3, n4;
	int soma;
	
	printf("Digite os numeros que serao somados: \n");
	
	printf("informe o primeiro numero: \n");
	scanf("%d", &n1);
	
	printf("informe o segundo numero: \n");
	scanf("%d", &n2);
	
		printf("informe o terceiro numero: \n");
	scanf("%d", &n3);
	
		printf("informe o quarto numero: \n");
	scanf("%d", &n4);
	
	soma = n1 + n2 + n3 + n4;
	
	printf("A soma dos numeros e: %d", soma);
	
}
