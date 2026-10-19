#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>
#include<math.h>




int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


    int idade;
    int TemIngresso;

    printf("Digit sua idade: ");
    scanf("%d", &idade);


    printf("Possui ingresso? (1 - sim / 0 - Não)");
    scanf("%d", &TemIngresso);

    if(idade >= 18 && TemIngresso){
      printf("Entrada permetida!\n");
    }else{
      printf("Entrada Não permetida!\n");
    }
    return 0;
    

}