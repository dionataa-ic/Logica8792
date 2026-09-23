#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>
#include<math.h>


    void fibonacci(int termos){
        int a = 0, b = 1, c; 
        printf("Sequencia de Fibonacci (%d termos): \n", termos);
        for(int i = 1; i <= termos; i++){
            printf("%d\n", a);
            c = a + b;
            a = b;
            b = c;
        }
        printf("\n");
    }

int main(){



    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    setlocale(LC_ALL, "pt_BR.UTF-8");

    fibonacci(10);


    
    return 0;
    }