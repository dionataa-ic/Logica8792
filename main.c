#include<stdio.h>
#include<windows.h>



    
int main(){



    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int nota;
    
    printf("Digite o número de 1 a 7: ");
    scanf("%d", &nota);


    switch (nota){
        case 1:
            printf("Reprovado");
            break;
        case 2:
            printf("Reprovado");
            break;
        case 3:
            printf("Reprovado");
            break;
        case 4:
            printf("Reprovado");
            break;
        case 5:
            printf("Recuperação");
            break;
        case 6:
            printf("Aprovado");
            break;
        case 7:
            printf("Aprovado");
            break;

        default:
            printf(" Nota Invalida!!");
            break;
           

    }

     return 0;
    }