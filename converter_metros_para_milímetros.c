//Escreva um programa que leia um valor em metros e o exiba convertido em milímetros.

#include <stdlib.h>
#include <stdio.h>

int main()
{
    //Declaração de variáveis
    float metros, milimetros;
    
    //Entrada
    printf("Informe um valor em metros: ");
    scanf("%f", &metros);
    printf("\n");

    //Processamento
    milimetros = metros * 1000;

    //Saída
    printf("O tamanho informado equivale a %.2f milímetros.", milimetros);
    return 0;
}