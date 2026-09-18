#include<stdio.h>
#include<windows.h>



    
int main(){



    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int opcao;

        printf("--- ESTAÇÃO DO ANO---\n");
        printf("12 - Dezembro Verão\n");
        printf("1 - Janeiro Verão\n");
        printf("2 - Março Verão\n");
        printf("3 - Abril Outono\n");
        printf("4 - Maio Outono\n");
        printf("5 - Junho Outono\n");
        printf("6 - julho Inverno\n");
        printf("7 - agosto Inverno\n");
        printf("8 - Julho Inverno\n");
        printf("9 - Setembro Primavera\n");
        printf("10 - Outubro Primavera\n");
        printf("11 - Novembro Privamvera\n");
        scanf("%d", &opcao);

        switch (opcao)
        {

    case 12:
    case 1:
    case 2:
            printf("Veraão\n");
            break;
    case 3:
    case 4:
    case 5:
            printf("Outono\n");
            break;
    case 6:
    case 7:
    case 8:
            printf("Inverno\n");
            break;
    case 9:
    case 10:
    case 11:
            printf("Primavera\n");
            default:
        printf("Erro: Categoria não cadastrada no sitema.\n");
        break;



        }
    return 0;
    }