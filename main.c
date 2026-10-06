#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>
#include<math.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numero;
    int sucesso;

    do{
        printf("Digite um número maior que 0: ");
        sucesso = scanf("%d", &numero);

        if(sucesso != 1){
            printf("Entrada invalida! Digite apenas números inteiros.\n");
            while(getchar() != '\n');
            numero = 0;
        }
    }while(numero <=0);

    printf("Você diogitou %dm que é valido!\n", numero);



    return 0;
 }