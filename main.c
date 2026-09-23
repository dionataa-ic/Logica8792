#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>

int main(){



    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    char nomes [3][20] ={
        "Dionata",
        "Jessica",
        "Correa"
    };

    for(int i = 0; i < 3; i++){
        printf("%s\n", nomes[i]);
    }
    
    return 0;
    }