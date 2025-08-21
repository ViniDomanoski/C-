#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int i, num1, num2;
	
	printf("Digite o primeiro numero: \n");
	scanf("%d", &num1);
	printf("Digite o segundo numero: \n");
	scanf("%d", &num2);
		
	if(num1 < num2){
		for(i = num1; i <= num2; i = i +=1){
			printf("%d ", i);
		}
	}
	if(num1 > num2){
		for(i = num1; i >= num2; i-=1){
			printf("%d ", i);
		}
	}
	return 0;
}
