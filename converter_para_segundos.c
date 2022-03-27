//Escreva um programa que leia a quantidade de dias, horas, minutos e segundos do usuário. Calcule o total em segundos.

#include <stdlib.h>
#include <stdio.h>

int main()
{
    //Declaração de variáveis
    int dias, horas, minutos, segundos, segundos_dias, segundos_horas, segundos_minutos, segundos_totais;

    //Entradas
    printf("Informe a quantidade de dias: ");
    scanf("%i", &dias);
    printf("\n");
    printf("Informe a quantidade de horas: ");
    scanf("%i", &horas);
    printf("\n");
    printf("Informe a quantidade de minutos: ");
    scanf("%i", &minutos);
    printf("\n");
    printf("Informe a quantidade de segundos: ");
    scanf("%i", &segundos);
    printf("\n");

    //Processamento
    segundos_dias = (((dias * 24) * 60) * 60);
    segundos_horas = ((horas * 60) * 60);
    segundos_minutos = minutos * 60;
    segundos_totais = segundos_dias + segundos_horas + segundos_minutos + segundos;

    //Saída
    printf("O total de segundos é: %i", segundos_totais);
}