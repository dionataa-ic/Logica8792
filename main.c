#include<stdio.h>
#include<windows.h>



    
int main(){



    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);


    if(a == b){
        printf("Os Numeros sao iguais!\n");
    }else{
        printf("Os numeros sao diferentes!\n"); 
    }

    return 0;

}
