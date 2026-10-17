#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>
#include<math.h>




int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];

    for(int i = 0; i < n; i++){
      printf("digite o valor %d: ", i + 1);
      scanf("%d", &v[i]);

    }

    for(int i = 0; i < n - 1; i++){
      for(int j = 0; j < n - i - 1; j++){

         if(v[j] > v[j + 1]){
            int temp = v[j];
            v[j] = v[j + 1];
            v[j + 1] = temp;
         }
         
      }
    }

    printf("Vetor ordenado: \n");
    for(int i = 0; i < n; i++){
      printf("%d", v[i]);

    }

    printf("\n");


    return 0;
    

}