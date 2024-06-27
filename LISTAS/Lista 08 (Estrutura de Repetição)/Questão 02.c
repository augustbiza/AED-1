//MAIOR PAR E MAIOR IMPAR
#include<stdio.h>

int main(){
    
    int repeticoes, numero, maiorPar = 2, maiorImpar = 1;
    do{//rejeitar repeticoes negativas
        printf("Quantos numeros voce deseja inserir:");
        scanf("%i", &repeticoes);
    }while(repeticoes <= 0);
    
    for(int c = 0; c < repeticoes; c++){
        printf("Digite o numero: ");
        scanf("%i", &numero);
            if(numero % 2){
                if(numero > maiorImpar){
                    maiorImpar = numero;
                }
            }//fim impar
            if(numero % 2 == 0){
                if(numero > maiorPar){
                    maiorPar = numero;
                }
            }//fim par
    }//fim for

    printf("Maior Impar = %i\nMaior Par = %i", maiorImpar, maiorPar);
}