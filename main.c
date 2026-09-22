#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>


void saudar(const char *nome){
    printf("Olá %s\n ", nome);
}

    
int main(){



    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    saudar("Dionata Ivan");
    saudar("Correa");
    saudar("De Souza");

    
  
    return 0;
    }