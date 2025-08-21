#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int valor[10];
	int i;
	
	for(i=0; i<10; i++)
	do{
	printf("Digite o %dº numero. \n", i+1);
	scanf("%d", &valor[i]);
	}while(valor[i] == 0);
	
	for(i=0; i<10; i++){
	printf("%d ", valor[i]);
	}
	printf("\n");
	for(i=9; i>=0; i--){
	printf("%d ", valor[i]);
	}
	

}


	
	
	

