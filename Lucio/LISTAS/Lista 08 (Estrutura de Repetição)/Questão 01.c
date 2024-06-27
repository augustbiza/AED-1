//NÚMERO PRIMO
#include<stdio.h>

int main(){

    int numero, divisores = 0;
    do{//rejeitar numeros negativos
        printf("Digite um numero: ");
        scanf("%i", &numero);
            if(numero <= 0){
                printf("Informe um numero positivo!\n\n");
            }
            else if(numero == 1){
                printf("Nao Primo!\n");
            }
    }while(numero < 1);

    for(int c = 2; c < numero/2; c++){
        if(numero % c == 0){//guardar a quantidade de divisores do número
            divisores++;
        }
    }//fim for

    if(divisores > 0){
        printf("Nao Primo!\n");
    }
    else{
        printf("Primo!\n");
    }

}//fim main