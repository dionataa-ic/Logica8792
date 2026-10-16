#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>
#include<math.h>


struct pessoa{
   char nome[50];
   int idade;
   float altura;
   float peso;
};


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    printf("--- Bem Vindo A Acamademia PesoMenos ---");

    int n;

    printf("Quantas pessoas deseja cadasrar: ");
    scanf("%d", &n);


    getchar(); //consome o '\n' deixando pleo scanf


    struct pessoa p1[n];

    for(int i = 0; i < n; i++){
      printf("\npessoa %d\n", i + 1);
      printf("Nome Completo: ");
      fgets(p1[i].nome, sizeof(p1[i].nome), stdin);

      printf("Idade: ");
      scanf("%d", &p1[i].idade);

      printf("Altura: ");
      scanf("%f", &p1[i].altura);

      printf("Peso: ");
      scanf("%f", &p1[i].peso);
      getchar();


    }

    printf("\n---  Lista de Pessoas ---\n");
    for(int i = 0; i < n; i++){

      printf("Nome: %s\n idade: %d | Altura: %.2f | Peso: %.2f", p1[i].nome, p1[i].idade, p1[i].altura, p1[i].peso);

    }

    return 0;
    

}