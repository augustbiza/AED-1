//MATRIZ QUADRADA --> DIAGONAL:  PRINCIPAL X SECUNDÁRIA
#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 3

void leia(int m[][COL]) {
    for(int i = 0; i < LIN; i++) {
        for(int j = 0; j < COL; j++) {
            
            printf("Insira um numero: ");
            scanf("%d", &m[i][j]);
        }
    }
}

float mediaAcima(int m[][COL]) {
    int soma = 0, qt = 0;
    for(int i = 0; i < LIN; i++) {
        for(int j = 0; j < COL; j++) {
            if(j > i) {
                soma += m[i][j];
                qt++;
            }
        }
    }
    float media = (float)soma/qt;

    return media;
}

float mediaAbaixo(int m[][COL]) {
    int soma = 0, qt = 0;
    for(int i = 0; i < LIN; i++) {
        for(int j = 0; j < COL; j++) {
            if(i > j) {
                soma += m[i][j];
                qt++;
            }
        }
    }
    float media = (float)soma/qt;

    return media;
}


int main(void) {
    system("cls");

    int m[LIN][COL];
    leia(m);

    printf("Media dos valores acima da diagonal principal = %.1f\n", mediaAcima(m));
    printf("Media dos valores abaixo da diagonal principal = %.1f\n", mediaAbaixo(m));

    return 0;
}