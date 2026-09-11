#include<stdio.h>
#include<windows.h>

int main(){

int idade;

printf("Digite a idade: ");
scanf("%d", &idade);

printf("Equivale a %d meses\n", idade * 12);
printf("Equivale a %d dias (aproximados)\n",idade * 365);

return 0;


}