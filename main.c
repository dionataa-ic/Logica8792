#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>
#include<math.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int contador = 0; 

    for(int i = 0; i <= 9; i++){
        for(int j = 0; j <= 9; j++){
            for(int x = 0; x <= 9; x++){
                for(int y = 0; y <= 9; y++){
                    contador++;
                    printf("Os possíveis resultaos do cadeado: %d %d %d %d\n", i, j, x, y);
                }
            }
        }
    }
    printf("O número totaal de interações: %d\n", contador);




    
    return 0;
    }