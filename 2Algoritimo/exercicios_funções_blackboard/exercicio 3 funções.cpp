#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

int maior_idade(int idade1, int idade2, int idade3){
	if(idade1 == idade2 && idade1 == idade3){
		return 0;
	}
	if(idade1 >= idade2 && idade1 >= idade3){
		return idade1;
	}
	if(idade2 >= idade1 && idade2 >= idade3){
		return idade2;
	}
	if(idade3 >= idade1 && idade3 >= idade2){
		return idade3;
	}
}

int main(){
	 
	 int i1, i2, i3, m=0;
	
	printf("Insira a primeira idade: \n");
	scanf("%d", &i1);
	printf("Insira a segunda idade: \n");
	scanf("%d", &i2);
	printf("Insira a terceira idade: \n");
	scanf("%d", &i3);
	
	m = maior_idade(i1,i2,i3);
	
	printf("A maior idade citada foi: %d \n", m);
	
	return 0;	
}
