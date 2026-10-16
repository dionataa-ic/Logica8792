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

    struct pessoa p1;
    printf("Digite seu nome: ");
    fgets(p1.nome, sizeof(p1.nome), stdin);
    
    printf("Digite sua idade: ");
    scanf("%d", &p1.idade);

    printf("Digite Sua Altura: ");
    scanf("%f", &p1.altura );

    printf("Digite seu peso: ");
    scanf("%f", &p1.peso);

    printf("Cadastro Efetuado com sucesso");

    printf("\n--- Dados ---\n");
      printf("Nome: %s\n", p1.nome);
      printf("Idade: %d\n", p1.idade);
      printf("Altura: %.2f\n", p1.altura);
      printf("Peso: %.2f\n", p1.peso);
      

    return 0;
    

}