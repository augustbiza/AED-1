//FIBONACCI = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
#include<stdio.h>

int main(){

    int posicao;
    do{
        printf("Qual termo de fibonacci voce deseja encontrar? ");
        scanf("%i", &posicao);
    }while(posicao <= 0);

    int termo1 = 0, termo2 = 1, termo3;   

        for(int c = 0; c < posicao - 1; c++){
            termo3 = termo1 + termo2;
            termo1 = termo2;
            termo2 = termo3;
        }//fim for

    printf("O %d termo de fibonacci = %d", posicao, termo3);
    
    return 0;
}
//Obs.: S1 = 1, S2 = 1, S3 = 2, S4 = 3 / 0 nao entra na sequencia