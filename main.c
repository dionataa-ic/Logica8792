#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>
#include<math.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int n;
    
    printf("Digite o tamanho da piramide: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = i; j < n; j++){
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++){
            printf("*");
        }
        printf("\n");
    }
    }