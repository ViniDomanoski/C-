#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
 int opcao, num1, num2, soma, sub, mult, div;
 
 	do{
 	printf("###TABEL###\n");
 	printf("1 = Soma\n");
 	printf("2 = subtracao\n");
 	printf("3 = Multiplicacao\n");
 	printf("4 = Divisao\n");
 	
 	printf("De acordo com a tabela acima, selecione qual operacao deseja realizar ou digite 0 para sair.\n");
	scanf("%d", &opcao); 
	
	switch(opcao){
	
		case 1:
			printf("Digite o primeiro numero: \n");
			scanf("%d", &num1);
			printf("Digite o segundo numero; \n");
			scanf("%d", &num2);
			soma = num1 + num2;
			printf("A soma dos dois numeros e: %d\n", soma);
			break;
		
		case 2:
			printf("Digite o primeiro numero: \n");
			scanf("%d", &num1);
			printf("Digite o segundo numero: \n");
			scanf("%d", &num2);
			sub = num1 - num2;
			printf("A subtracao dos numeros e: %d\n", sub);	
			break;
			
		case 3:
			printf("Digite o peimeiro numero: \n");
			scanf("%d", &num1);
			printf("Digite o segundo numero: \n");
			scanf("%d", &num2);
			(mult = num1 * num2);
			printf("A multiplicacao dos numeros e: %d\n", mult);
			break;
			
		case 4:
			printf("Digite o peimriro numero: \n");
			scanf("%d", &num1);
			printf("Digite o segundo numero: \n");
			scanf("%d", &num2);
			div = num1 / num2;
			printf("A divisao dos numero e: %d\n", div);
			break;
}
}while(opcao != 0);

return 0;
		
}
