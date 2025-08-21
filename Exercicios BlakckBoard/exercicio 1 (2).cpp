#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float n1, n2, soma, sub, mult, div;
	int op;
	
	do{
	
	printf("####TABELA####\n");
	printf("1 - Soma\n");
	printf("2 - Subtracao\n");
	printf("3 - Multiplicacao\n");
	printf("4 - Divisao\n");
	printf("Segundo a tabela acima, escolha qual operacao deseja fazer:\n");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			printf("Digite o primeiro numero:\n");
			scanf("%f", &n1);
			printf("Digite o segundo numero:\n");
			scanf("%f", &n2);
			soma = n1 + n2;
			printf("A soma entre os dois numeros e igual a: %.2f\n2", soma);
			break;
			
			
		case 2:
			printf("Digite o primeiro numero:\n");
			scanf("%f", &n1);
			printf("Digite o segundo numero:\n");
			scanf("%f", &n2);
			sub = n1 - n2;
			printf("A subtracao entre os dois numeros e igual a: %.2f\n", sub);
			break;
			
		case 3:
			printf("Digite o primeiro numero:\n");
			scanf("%f", &n1);
			printf("Digite o segundo numero:\n");
			scanf("%f", &n2);
			mult = n1 * n2;
			printf("A multiplicacao entre os dois numeros e igual a: %.2f\n", mult);
			break;
			
		case 4:
			printf("Digite o primeiro numero:\n");
			scanf("%f", &n1);
			printf("Digite o segundo numero:\n");
			scanf("%f", &n2);
			
			if (n2 == 0){
				printf(" A divisao nao pode ser realizada pois o numero e igual a zero!\n");
			}
			else{
				div = (n1 / n2);
				printf("A divisao entre os dois numeros e igual a: %.2f\n", div);
			}
			break;
			
		default:
			printf("Opcao invalida!");
			break;
			
	}
		
		printf("Digite 1 se quiser continuar e 2 se quiser sair\n");
		scanf("%d", &op);
		
		}while(op == 1);
			return 0;
		
}
