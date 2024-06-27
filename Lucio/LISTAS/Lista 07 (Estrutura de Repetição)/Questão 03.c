//Calcular e escrever o valor de H, sendo H = 1/1 + 1/3 + 1/9 + 1/27 + ...
#include<stdio.h>
#include<stdbool.h>

int main(){

    int termo;

    do{//rejeitar posição nula ou negativa
        printf("Qual o termo de H voce deseja saber? ");
        scanf("%d", &termo);
    }while(termo < 1);

    int potencia = 1;
    
        for(int c = 0; c < termo - 1; c++){
        potencia = potencia * 3;
        }//fim for

    printf("O %d termo de H = 1/%d", termo, potencia);

    return 0;
}