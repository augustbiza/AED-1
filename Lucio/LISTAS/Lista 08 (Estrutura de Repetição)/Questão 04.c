//NÚMERO DE DIVISORES DE UM NÚMERO
#include<stdio.h>

int main(){

    int numero, divisores = 0;
    do{//rejeitar numero negativo
        printf("Informe o numero: ");
        scanf("%d", &numero);
            if(numero < 0){
                printf("Insira um numero natural!\n\n");
            }//mensagem de erro
    }while(numero < 0);

    for(int c = 1; c <= numero / 2; c++){
        if(numero % c == 0){
            divisores++;
        }
    }//fim for divisores
    
    printf("%d tem %d divisores", numero, divisores + 1);

    return 0;
}