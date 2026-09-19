#include<stdio.h>
#include<windows.h>



    
int main(){



    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    float peso, altura, imc; 

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 18.5){
        printf(" Seu peso é: %f\n", peso);
        printf(" Sua altura é: %f\n", altura);
        printf("Classificação: abaixo do peso!\n");
    }else if(imc < 25){
        printf(" Classificação: Peso Normal!\n");
    }else if( imc <30){
        printf("Classifcação: Sobrepeso!\n");
    }else{
        printf("classificação: Obesidade!\n");

    }

    
  
    return 0;
    }