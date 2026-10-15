#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>
#include<math.h>

struct Pessoa{
    char nome[50];
    int idade;
    float altura;
};


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    struct Pessoa p1 = {"Dionata", 37, 1.66};
    struct Pessoa p2 = {"jessica", 30, 1.68};
    struct Pessoa p3 = {"Elizabete", 50, 1.56};


    printf("Nome: %s | Idade: %d | Altura: %.2f\n", p1.nome, p1.idade, p1.altura);
    printf("Nome: %s | Idade: %d | Altura: %.2f\n", p2.nome, p2.idade, p2.altura);
    printf("Nome: %s | Idade: %d | Altura: %.2f\n", p3.nome, p3.idade, p3.altura);





    return 0;
 }