#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>
#include<math.h>




int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);


    while(n >= 0){
        printf("%d\n", n);
        n--;
    }


    return 0;
    

}