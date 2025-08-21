#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float sal;
	float perc;
	float aumento;
	float novsal;
	
	printf("Digite o seu salario atual: \n");
	scanf("%f", &sal);
	
	printf("Informe o percentual de aumento: \n");
	scanf("%f", &perc);
	
	aumento = sal * perc/100;
	novsal = sal + aumento;
	
	printf("O seu aumento foi de:%.2f \n", aumento);
	printf("Seu salario atual e de:%.2f", novsal);
	
}
