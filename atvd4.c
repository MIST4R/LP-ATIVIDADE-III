#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // determinando variaveis
    int n[5];
    int impar = 0;
    int negativo = 0;
    int maior;
    int menor;
    float mediapar;
    float media;
    int i;
    int somapar = 0;
    int par = 0;
    int soma = 0;

    // COLETANDO DADOS
    printf("digite 5 n�meros abaixo ");
    for (i = 0; i < 5; i++)
    {
        printf("%d� n�mero: ", i + 1);
        scanf("%d", &n[i]);
        system("cls||clear");

        // pegando n�meros impares
        if (n[i] % 2 == 1)
        {
            impar++;
        }

        // pegando n�meros negativos
        if (n[i] < 0)
        {
            negativo++;
        }

        // pegando o maior e menor n�meros
        maior = n[i] > maior ? n[i] : maior;
        menor = n[i] < menor ? n[i] : menor;

        // pegando a media dos n�meros pares
        if (n[i] % 2 == 0)
        {
            somapar += n[i];
            par++;
            mediapar = somapar / par;
        }

        // pegando a media geral
        soma += n[i];
    }
    media = soma / i;

    // montrando dados
    printf("impar: %d\n", impar);
    printf("negativo: %d\n", negativo);
    printf("maior: %d\n", maior);
    printf("menor: %d\n", menor);
    printf("media dos n�meros pares: %f\n", mediapar);
    printf("media geral: %f\n", media);

    return 0;
}
