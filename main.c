#include<stdio.h>
#include<windows.h>



    
int main(){



    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int opcao;

        printf("--- ESTAÇÃO DO ANO---\n");
        printf("1 - Dezembro Verão\n");
        printf("2 - Janeiro Verão\n");
        printf("3 - Março Verão\n");
        printf("4 - Abril Outono\n");
        printf("5 - Maio Outono\n");
        printf("6 - Junho Outono\n");
        printf("7 - julho Inverno\n");
        printf("8 - agosto Inverno\n");
        printf("9 - Julho Inverno\n");
        printf("10 - Setembro Primavera\n");
        printf("11 - Outubro Primavera\n");
        printf("12 - Novembro Privamvera\n");
        scanf("%d", &opcao);

        switch (opcao)
        {

    case 1:
        printf("Qual estação: Verão\n");
        break;
    case 2:
        printf("Qual Estação: Verão\n");
        break;
    case 3:
            printf(" Qual Estação: Verão\n");
            break;
    case 4:
            printf(" Qual Estação: Outono\n");
            break;
    case 5:
            printf(" Qual Estação: Outono\n");
            break;
    case 6:
            printf(" Qual Estação: Outono\n");
            break;
    case 7:
            printf(" Qual estação: Inverno\n");
            break;
    case 8:
            printf(" Qual Estação: Inverno\n");
            break;
    case 9:
            printf(" Qual estação: Inverno\n");
            break;
    case 10:
            printf(" Qual estação: Inverno\n");
            break;
    case 11:
            printf(" Qual estação: Primavera\n");
            break;
    case 12:
            printf(" Qual estação: Primavera\n");
            break;
            default:
            printf("Erro: Categoria não cadastrada no sistema.\n");
            break;


        }
    return 0;
    }