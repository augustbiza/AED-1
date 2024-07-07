#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define LIN 4
#define COL 3

void leia(int m[][COL]) {
    for(int i = 0; i < LIN; i++) {
        for(int j = 0; j < COL; j++) {
            
            printf("Insira um numero: ");
            scanf("%d", &m[i][j]);
        }
    }
}

bool procurarChave(int m[][COL], int chave) {

    bool achou = false;
        for(int i = 0; i < LIN && !achou; i++) {
            for(int j = 0; j < COL && !achou; j++) {
                if(m[i][j] == chave) achou = true;
            }
        }
    return achou;
}


int main(void) {
    system("cls");

    int m[LIN][COL];
    leia(m);

    int chave = 3;

    if(procurarChave(m, chave)) printf("Chave %d presente!\n", chave);
    else printf("Matriz nao possui a chave %d", chave);

    return 0;
}