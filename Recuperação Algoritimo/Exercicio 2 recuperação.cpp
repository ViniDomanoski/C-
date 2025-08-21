#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    float salario, somaSalarios = 0, maiorSalario = 0, menorSalario = 100000;
    int numFilhos, totalPessoas = 0, totalFilhos = 0, pessoasAteDoisSalarios = 0;
    float salarioMinimo = 1320;

    char continuar;

    printf("Digite os dados dos habitantes:\n");

    do {
        printf("Salario: ");
        scanf("%f", &salario);

        if (salario <= 0) {
            printf("Salario invalido. Digite um valor positivo.\n");
            continue;
        }

        printf("Numero de filhos: ");
        scanf("%d", &numFilhos);

        somaSalarios += salario;
        totalFilhos += numFilhos;
        totalPessoas++;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }
        if (salario < menorSalario) {
            menorSalario = salario;
        }
        if (salario <= 2 * salarioMinimo) {
            pessoasAteDoisSalarios++;
        }

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');


    float mediaSalario = somaSalarios / totalPessoas;
    float mediaFilhos = (float)totalFilhos / totalPessoas;
    float porcentagemAteDoisSalarios = (float)pessoasAteDoisSalarios / totalPessoas * 100;

    printf("\nResultados:\n");
    printf("Media salarial: R$ %.2f\n", mediaSalario);
    printf("Media de filhos por pessoa: %.2f\n", mediaFilhos);
    printf("Maior salario: R$ %.2f\n", maiorSalario);
    printf("Menor salario: R$ %.2f\n", menorSalario);
    printf("Porcentagem de pessoas com ate 2 salarios minimos: %.2f%%\n", porcentagemAteDoisSalarios);

    return 0;
}
