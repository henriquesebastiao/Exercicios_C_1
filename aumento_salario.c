//Faça um programa que calcule o aumento de um salário. Ele deve solicitar o valor do salário e a porcentagem do aumento. Exiba o valor do aumento e do novo salário.

#include <stdlib.h>
#include <stdio.h>

int main()
{
    //Declaração de variáveis
    float salario_atual, taxa_percentual, aumento, novo_salario;

    //Entrada
    printf("Informe o valor do salário atual: ");
    scanf("%f", &salario_atual);
    printf("\n");
    printf("Informe a taxa percentual do aumento: ");
    scanf("%f", &taxa_percentual);

    //Processamento
    aumento =   ((taxa_percentual / 100) * salario_atual);
    novo_salario = aumento + salario_atual;

    //Saída
    printf("O valor do aumento é de: R$ %.2f", aumento);
    printf("\n");
    printf("O valor do novo salário é de: R$ %.2f", novo_salario);

    return 0;
}