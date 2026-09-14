#include<stdio.h>
#include<windows.h>



    
int main(){



    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int idade;

   printf("Digite uma idade: ");
   scanf("%d", &idade);

   if(idade >=18){
    printf("Voce é maior de idade!");
   }else{
    printf("Voce é menos de idade!");
   }
   
    return 0;

}