#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char aluno[5][200];
    int idade[5];
    float nota[5][3];
    float media[3];
    int soma = 0;
    int i;
    int j;

    for (i = 0; i < 5; i++)
    {
        printf("digite o nome do %d° aluno: ", i + 1);
        scanf("%s", &aluno[i]);
        system("cls||clear");

        printf("digite a idade do %d° aluno: ", i + 1);
        scanf("%d", &idade[i]);
        system("cls||clear");

        for (j = 0; j < 3; j++)
        {
            printf("digite a %d° nota do %d° aluno: ", j + 1, i + 1);
            scanf("%f", &nota[i][j]);
            system("cls||clear");

        	soma += nota[i][j];
        }
        media[i] = soma / j;
        soma = -0;
    }

    for (i = 0; i < 5; i++)
    {
        printf("nome do %d° aluno: %s\n", i + 1, aluno[i]);
        printf("idade do %d° aluno: %d\n", i + 1, idade[i]);
        for (j = 0; j < 3; j++)
        {
            printf("%d° nota do %d° aluno: %.2f\n", j + 1, i + 1, nota[i][j]);
          
        }
  		if (media[i] >= 7)
        {
            printf("aprovado\n");
        }
        else if (media[i] >= 5 && media[i] < 7)
        {
            printf("recuperação\n");
        }
        else
        {
            printf("reprovado\n");
        }
        printf("media: %.2f\n\n", media[i]);
    }

    return 0;
}
