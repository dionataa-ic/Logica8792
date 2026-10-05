#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>
#include<math.h>

char* saudacao(){
    return "ola, seja bem-vindo(a)!";
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    printf("%s\n", saudacao());

    

    return 0;
 }