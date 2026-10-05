#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>
#include<math.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int voto; 

    printf("Qual seu Voto: ");
    scanf("%d", &voto);

    if(voto == 10){
        printf("Manoel");
    }else if(voto == 20){
        printf("Carla");
    }else if(voto == 30){
        printf("Bianca");
    }else if(voto == 40){
        printf("Henrique");
    }else if(voto == 50){
        printf("Bruno");
    }else{
        printf(" Voto Invalido");
    }
    

    

    return 0;
 }