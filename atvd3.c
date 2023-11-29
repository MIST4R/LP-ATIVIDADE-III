#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char numero[999][11];
    char nome[999][200];
    int menu;
    int menu2;
    int i;

    printf("digite '1' para adicionar um novo número e nome.\n");
    printf("digite '2' para mostrar lista telefonica: ");
    scanf("%d", &menu);
    system("cls||clear");

    switch (menu)
    {
    case 1:
        for (i = 0; i < 999; i++)
        {
            printf("digite o nome da %d° pessoa: ", i + 1);
            scanf("%s", &nome[i]);
            system("cls||clear");

            printf("digite o número da %d° pessoa: ", i + 1);
            scanf("%s", &numero[i]);
            system("cls||clear");

            printf("digite '1' para continuar adiconando contatos.\n");
            printf("digite '2' para terminar de adicionar: \n");
            scanf("%d", &menu2);
            system("cls||clear");

            switch (menu2)
            {
            case 1:
                printf("digite o nome da %d° pessoa: ", i + 1);
                scanf("%s", &nome[i]);
                system("cls||clear");

                printf("digite o número da %d° pessoa: ", i + 1);
                scanf("%s", &numero[i]);
                system("cls||clear");
                break;

            case 2:
                printf("digite '2' para mostrar lista telefonica: ");
                scanf("%d", &menu);
                system("cls||clear");

                for (i = 0; i < 999; i++)
                {
                    printf("nome: %s\n", nome[i]);
                    printf("número: %s\n\n", numero[i]);
                }
                break;

            default:
                printf("opção invalida");
                break;
            }
        }
        break;

    case 2:
        printf("sem números e nomes registrados.");
        
        break;

    default:
        printf("opção invalida.");
        break;
    }
    return 0;
}
