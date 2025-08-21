#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i, n1, n2;
	
	printf("Digite o peimeiro numero: \n");
	scanf("%d", &n1);
	printf("Digite o segundo numero: \n");
	scanf("%d", &n2);
	
	if(n2 > n1)
	{
		for(i = n1; i <= n2; i++);
		printf("\n%d", i);
	}
	else if(n1 > n2)
	{
		for(i = n1; i >= n2; i-- );
		printf("%d", i);
	}
	return 0;
	
}
