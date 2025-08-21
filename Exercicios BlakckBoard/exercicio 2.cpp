#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	
  setlocale(LC_ALL, "Portuguese");
  int i = 5, soma = 0;
  
 
    while(i <= 500)
    {
    	soma = soma + i;
    	i = i + 1;
	}
    printf("\n O valor da soma é %d ", soma);

	return 0;
}
