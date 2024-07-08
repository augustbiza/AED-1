//SOMA DA COLUNA - INTERATIVO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIN 3
#define COL 4

void soma(float m[][COL], float *vCol, float *vLin) {

    float sCol = 0;

        for (int i = 0; i < COL; i++)
        {
            for (int j = 0; j < LIN; j++)
            {
                sCol += m[j][i]; 
            }
            vCol[i] = sCol;
            sCol = 0;
        }
        
        for(int c = 0; c < COL; c++) {
            printf("%.1f ", vCol[c]);
        }
        printf("\n");

    float sLin = 0;

        for(int i = 0; i < LIN; i++) {
            for(int j = 0; j < COL; j++) {
                sLin += m[i][j];
            }
            vLin[i] = sLin;
            sLin = 0;

        }

        for(int c = 0; c < LIN; c++) {
            printf("%.1f ", vLin[c]);
        }
}



int main(void) {
    system("cls");
    
    float m[LIN][COL] = {1,2,3,4,5,6,7,8,9,10,11,12}, vCol[COL], vLin[LIN];

    soma(m, vCol, vLin);

    return 0;
}