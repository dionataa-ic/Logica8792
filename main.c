#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>
#include<math.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    for(int i = 1; i < 4; i++){
        for(int j = 1; j < 4; j++){
            printf("For externo e for interno: %d %d\n", i, j);
        }
    }
        
    




    
    return 0;
    }