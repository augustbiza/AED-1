//NÚMERO PRIMO UTILIZANDO FUNÇÃO
#include<stdio.h>
#include<stdbool.h>

void titulo(){
    printf("NUMEROS PRIMOS!\n");
}

int leianumero(){
    int num;
    do{
        printf("Digite um numero: ");
        scanf("%d", &num);
            if(num == 1){
                printf("Numero NAO PRIMO!\n\n");
            }
    }while(num < 1);

    return num;
}

bool numeroDivisores(int num){
    bool primo;
    int divisores = 0;

        for(int c = 2; c <= num/2; c++){
            if(num % c == 0){
                divisores++;
            }
        }
        if(divisores > 0){
            primo = false;
        }

    return primo;
}

int main(){

    titulo();

    int numero = leianumero();
    bool primo = numeroDivisores(numero);
        if(primo){
            printf("Numero PRIMO!\n");
        }
        else{
            printf("Numero NAO PRIMO!\n");
        }

    return 0;
}