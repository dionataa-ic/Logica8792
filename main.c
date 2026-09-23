#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>
#include<math.h>


    void tabuada(int n){
        printf("Tavuada do %d\n", n);
        for(int i = 1; i <= 10; i++){
            printf("%d x %d = %d\n", n, i, n * i);

        }
    }

int main(){



    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    setlocale(LC_ALL, "pt_BR.UTF-8");

    tabuada(7);


    
    return 0;
    }