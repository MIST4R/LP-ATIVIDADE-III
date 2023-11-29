#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[5][200];
    int idade[5];
    float peso[5];
    float altura[5];
    int i;
    int maioridade = 0;
    int menoridade = 999;
    float maioraltura = 0;
    float menoraltura = 999;
    float maiorpeso = 0;
    float menorpeso = 999;

    for ( i = 0; i < 5; i++)
    {
        printf("digite o nome da %d° pessoa: ", i + 1);
        scanf("%s", &nome[i]);
        system("cls||clear");

        printf("digite a idade da %d° pessoa: ", i + 1);
        scanf("%d", &idade[i]);
        system("cls||clear");

        printf("digite a altura da %d° pessoa: ", i + 1);
        scanf("%f", &altura[i]);
        system("cls||clear");

        printf("digite o peso da %d° pessoa: ", i + 1);
        scanf("%f", &peso[i]);
        system("cls||clear");
        
        maioridade = idade[i] > maioridade ? idade[i] : maioridade;
        menoridade = idade[i] < menoridade ? idade[i] : menoridade;

        maioraltura = altura[i] > maioraltura ? altura[i] : maioraltura;
        menoraltura = altura[i] < menoraltura ? altura[i] : menoraltura;

        maiorpeso = peso[i] > maiorpeso ? peso[i] : maiorpeso;
        menorpeso = peso[i] < menorpeso ? peso[i] : menorpeso;

    }
    
    for ( i = 0; i < 5; i++)
    {
        printf("nome da %d° pessoa: %s\n", i + 1, nome[i]);
        printf("idade da %d° pessoa: %d\n", i + 1, idade[i]);
        printf("altura da %d° pessoa: %.2f\n", i + 1, altura[i]);
        printf("peso da %d° pessoa: %.2f\n\n", i + 1, peso[i]);
    }
    printf(" maior idade: %d\n", maioridade);
    printf(" maior altura: %.2f\n", maioraltura);
    printf(" maior peso: %.2f\n", maiorpeso);
    printf(" menor idade: %d\n", menoridade);
    printf(" menor altura: %.2f\n", menoraltura);
    printf(" menor peso: %.2f", menorpeso);
    return 0;
}

