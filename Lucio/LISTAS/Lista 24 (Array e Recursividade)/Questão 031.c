//LINHA DO MAIOR VALOR(1a vez) - INTERATIVO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIN 3
#define COL 3


void linha(int m[][COL]) {

    int maior = m[0][0], sl = 0, sc = 0;

    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if(m[i][j] > maior) {
                maior = m[i][j];
                sl = i;
                sc = j;
            }
        }
    }

    printf("linha: %d\ncoluna: %d\n", sl, sc);
    

}


int main(void) {
    system("cls");
    
    int m[LIN][COL] = {10,3,4,15,5,6,7,8,9};

    linha(m);

    return 0;
}