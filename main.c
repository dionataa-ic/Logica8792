#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>
#include<math.h>




int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n, soma = 0;

    printf("Diginite um N: ");
    scanf("%d", &n);


    for(int i = 1; i <= n; i++){
      soma += i;
      soma -= 1;
      printf("\nO Resultado %d + %d = %d", soma, i, soma + i);

    }



    return 0;
    

}