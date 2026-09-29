#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>
#include<math.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int n;
    
    printf("Digite o numeros de linhas: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        long long valor = 1; 
        for(int espaco = 0; espaco < n - i; espaco++){
            printf(" ");
        }
        for(int j = 0; j <= i; j++){
            printf("%11d", valor);
            valor = valor * (i - j) / (j + 1); 
        }
        printf("\n");
    }
    
    }