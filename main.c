#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>
#include<math.h>


int votosA = 0;
int votosB = 0;
int votosNulos = 0;

void votar(int numero){
    if(numero == 1){
        votosA++;
        printf("Você votou no candidato A.\n");
    }else if(numero == 2){
        votosB++;
        printf("Você votou no candidato B.\n");
    }else{
        votosNulos++;
        printf("Voto Nulo.\n");
    }
}


void resultado(){
    printf("\n===== resultado da votação =====\n");
    printf("Candidato A: %d votos\n", votosA);
    printf("Candidado B: %d votos\n", votosB);
    printf("Nulos: %d votos\n", votosNulos);

    if(votosA > votosB){
        printf(">>> Candidato A Venceu!\n");
    }else if(votosB > votosA){
        printf(">>> Candidato B venceu!\n");
    }else{
        printf(">>> Empate!\n");
    }
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int voto;
    int totalEleitores = 5;

    for(int i = 0; i < totalEleitores; i++){
        printf("Eleitor %d - digite 1 para A, Digite B: ", i + 1);
        scanf("%d", &voto);
        votar(voto);
    }

    
    resultado();

    return 0;
 }