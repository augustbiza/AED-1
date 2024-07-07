
#include <stdio.h>
#include <stdlib.h>
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

int procurarChave(int m[][COL], int chave) {
    int qt = 0;

        for(int i = 0; i < LIN; i++) {
            for(int j = 0; j < COL; j++) {
                if(m[i][j] == chave) qt++;
            }
        }
    return qt++;
}


int main(void) {
    system("cls");

    int m[LIN][COL];
    leia(m);

    int chave = 1, qt = procurarChave(m, chave);
        if(qt > 0) printf("A chave %d aparece %d vezes\n", chave, qt);
        else printf("A chave %d nao esta presente na matriz\n", chave);

    return 0;
}