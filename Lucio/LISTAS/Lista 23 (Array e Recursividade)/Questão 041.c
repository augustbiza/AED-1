//VALORES DA DIAGONAL SECUNDÁRIA - INTERATIVO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define COL 3


void secundaria(int m[][COL]) {
    int val[COL], s = 0;
    int tam = COL;

        for(int i = 0; i < COL; i++) {
            for(int j  = 0; j < COL; j++) {
                if(i+j == tam-1) {
                    val[s] = m[i][j];
                    s++;
                }
            }
        }
    int x = 0;
    while(x < s) {
        printf("%d ", val[x]);
        x++;
    }
}



int main(void) {
    system("cls");
    int m[COL][COL] = {1,2,3,4,5,6,7,8,9};

    secundaria(m);

    return 0;
}