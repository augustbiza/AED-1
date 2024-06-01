//PAR OU IMPAR UTILIZANDO FUNÇÃO
#include<stdio.h>
#include<stdbool.h>

void titulo(){
    printf("DESCUBRA SE O NUMERO E PAR OU IMPAR!\n");
}

int leiaNumero(){
    int num;
    do{
        printf("Informe o numero: ");
        scanf("%i", &num);
    }while(num < 0);

    return num;
}

bool parImpar(int num){
    bool par;
        if(num % 2){//se tiver resto em num/2 'par' = falso, ou seja, = impar
            par = false;
        }
    return par;
}

int main(){//INICIO MAIN

    titulo();

    int numero = leiaNumero();

    bool par = parImpar(numero);
        if(par){
            printf("Par!\n");
        }
        else{
            printf("Impar!\n");// bool false = impar
        }

    return 0;
}