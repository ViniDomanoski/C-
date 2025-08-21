#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	int i = 1;
	int n;
	int fatorial = 1;
	
	printf("Digite o valor de n: \n");
	scanf("%d", &n);
	
	if(n >= 0){
		for(i=1; i<=n; i++)
		{
		fatorial = fatorial * i;
		}
		printf("O valor do fatorial de %d e igual a %d", n, fatorial);
	}
	else{
		printf("Nao existe fatorial de numero negativo!");
	}
	
	return 0;
	
}
