#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int valor, total_valores = 0, positivos = 0, negativos = 0;
    float soma = 0, media;

    printf("Digite os valores ou digite 0 para parar:\n");

    do{
        scanf("%d", &valor);

        total_valores++;
        soma += valor;

        if (valor > 0) {
            positivos++;
        } else if (valor < 0) {
            negativos++;
        }
    }while(valor != 0);

    if (total_valores > 0) {
        media = soma / total_valores;

        printf("\nResultados:\n");
        printf("Total de valores: %d\n", total_valores);
        printf("Média aritmetica: %.2f\n", media);
        printf("Valores positivos: %d (%.2f%%)\n", positivos, (float)positivos / total_valores * 100);
        printf("Valores negativos: %d (%.2f%%)\n", negativos, (float)negativos / total_valores * 100);
    } else {
        printf("Nenhum valor foi digitado.\n");
    }

    return 0;
}
