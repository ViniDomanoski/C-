#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");
    system("cls");

    char op;
    float raio, circunferencia;
    int numero1, numero2, numero3;

    printf("-------Menu de Opcoes-------- \n");
    printf("A - Exibir mensagem de boas-vindas \n");
    printf("B - Calcular a área de um circulo \n");
    printf("C - Calcular a soma de dois numeros\n");
    printf("D - Sair\n");

    printf("Escolha uma das Opcoes \n");
    scanf("%c", &op);

    switch (op)
    {
    case 'A':
        printf("Boas Vindas \n");
        break;

    case 'B':
        printf("informe o raio do Circulo \n");
        scanf("%f", &raio);
        circunferencia = 3.14 * (raio*raio);
        printf("A area do circulo e: %.2f", circunferencia);
    case 'C':
        printf("Informe o Primeiro numero interio\n");
        scanf("%d", &numero1);
        printf("Informe o segundo numero inteiro \n");
        scanf("%d", &numero2);
        circunferencia= numero1+numero2;
        printf("A soma dos dois numeros e: %d ",circunferencia);
        break;
    case 'D':
        printf("Programa finalizado \n");
        break;


    default:
        break;
    }

system ("pause");



}
