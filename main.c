#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>


int somar(int a, int b){
    return a + b;
} 
void soma(){
    int num1, num2;
    printf("Digite um valor para num1: ");
    scanf("%d", &num1);
    printf("Digite um valor para num2: ");
    scanf("%d", &num2);
    int resultado1 = num1 + num2;
    printf(" O resultado da soma com void é %d\n", resultado1);
}
int main(){

int num1, num2; 

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    // int resultado = somar (5, 3);
    // printf("O resultado da soma é: %d", resultado);

    soma(num1, num2);

  
    return 0;
    }