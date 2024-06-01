//SEGUNDO MAIOR NÚMERO UTILIZANDO PONTEIRO
#include<stdio.h>

void leiaNum(int *pn1, int *pn2, int *pn3){
    printf("Informe tres numeros: ");
    scanf("%i%i%i", pn1, pn2, pn3);
}

void ordem(int n1, int n2, int n3, int *seg){
    if(n1 > n2 && n1 > n3){
        if(n2 > n3){
            *seg = n2;//valor de '*seg' = n2
        }
        else{
            *seg = n3;//valor de '*seg' = n3
        }
    }else if(n2 > n1 && n2 > n3){
        if(n1 > n3){
            *seg = n1;//valor de '*seg' = n1
        }
        else{
            *seg = n3;//valor de '*seg' = n3
        }
    }
    else if(n3 >n1 && n3 > n2){
        if(n1 > n2){
            *seg = n1;//valor de '*seg' = n1
        }
        else{
            *seg = n2;//valor de '*seg' = n2
        }
    }
}

int main(){

    int num1, num2, num3;

    leiaNum(&num1, &num2, &num3);//endereços de memoria como parâmetro

    int segMaior;

    ordem(num1, num2, num3, &segMaior);//endereço de 'segmaior' como parâmetro

    printf("Segundo maior = %i\n", segMaior);

    return 0;
}