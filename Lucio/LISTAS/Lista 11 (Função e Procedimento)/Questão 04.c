//FATORIAL UTILIZANDO FUNÇÃO
#include<stdio.h>

void titulo(){
    printf("FATORIAL!\n");
}

int leiaNumero(){
    int num;
    do{
        printf("Informe um numero: ");
        scanf("%i", &num);
    }while(num < 0);

    return num;
}

int calculaFat(int num){
    int fat = 1;
        for(int c = 2; c <= num; c++){
            fat *= c;
        }

    return fat;
}

int main(){

    titulo();

    int numero = leiaNumero();
    int fatorial = calculaFat(numero);
    printf("Fatorial de %i = %i", numero, fatorial);

    return 0;
}