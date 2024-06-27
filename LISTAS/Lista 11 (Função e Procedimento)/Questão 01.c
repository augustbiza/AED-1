//CALCULE O MAIOR ENTRE DOIS NÚMEROS UTILIZANDO FUNÇÃO
#include<stdio.h>

void titulo(){
    printf("Maior entre dois numeros!\n");
}

float leiaNumero(){
    float num;
    printf("Informe um numero: ");
    scanf("%f", &num);

    return num;
}

float maiorNumero(float num1, float num2){
    float maior;
        if(num1 > num2){
            maior = num1;
        }
        else{
            maior = num2;
        }

    return maior;
}

int main(){

    titulo();

    float numero1 = leiaNumero();
    float numero2 = leiaNumero();

    float maior = maiorNumero(numero1, numero2);

    printf("%.1f\n", maior);

    return 0;
}