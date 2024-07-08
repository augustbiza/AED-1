//MAIOR VALOR DIAGONAL PRINCIPAL - INTERATIVO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define COL 3

int maiorValor(int m[][COL]) {
    int maior = m[0][0];

        for(int i = 0; i < COL; i++) {
            for(int j = 0; j < COL; j++) {
                if(i == j && (m[i][j] > maior)) maior = m[i][j];
            }
        }

    return maior;
}


int main(void) {

    int m[COL][COL] = {1,2,3,4,9,6,7,8,9};

    printf("%d\n", maiorValor(m));
}