//fazer uma cópia da matriz
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
const int NUM_LIN = 3; 
const int NUM_COL = 2; 

void leMatriz(float m[][NUM_COL]) {
    for(int i = 0; i < NUM_LIN; i++) {

        for(int j = 0; j < NUM_COL; j++) {
            
            printf("Insira um numero: ");
            scanf("%f", &m[i][j]);
        }
    }
}

void copia(float m1[][NUM_COL], float m2[][NUM_COL]) {
    for(int i = 0; i < NUM_LIN; i++) {

        for(int j = 0; j < NUM_COL; j++) {
            m2[i][j] = m1[i][j];
        }
    }
}

bool igualdade(float m1[][NUM_COL], float m2[][NUM_COL]) {

    bool diferentes = false; //condição de parada
    int i = 0, j = 0;
        for(; i < NUM_LIN && !diferentes; i++) {                    
            for(; j < NUM_COL && !diferentes; j++) {
                if(m1[i][j] != m2[i][j]) diferentes = true;
            }
        }
    
    
    return diferentes;
//enquanto percorre os elementos das matrizes: se eles forem diferentes, a bool 'diferentes' vira falsa e sai da condição de execução dos for, em que o oposto de diferentes tem q ser verdaderiro para entrar, e a bool senda verdadeira, seu oposto é falsa e não entra no for
}

void transposta(float m1[][NUM_COL], float m2[][NUM_COL]) {
    m2[NUM_COL][NUM_LIN];

    for(int i = 0; i < NUM_LIN; i++) {

        for(int j = 0; j < NUM_COL; j++) {

            m2[j][i] = m1[i][j];
        }
    }
}


int main() { 
    system("cls");

    float M1[NUM_LIN][NUM_COL]; 
    leMatriz(M1);
 
    float M2[NUM_LIN][NUM_COL]; 
    //leMatriz(M2);
    //copia(M1, M2);
/*
    if(igualdade(M1, M2)) printf("Diferentes!\n\n");
    else printf("Iguais!\n\n");
*/

    transposta(M1, M2);

    for(int l = 0; l < NUM_COL; l++) {
        for(int c = 0; c < NUM_LIN; c++) {
            printf("%.1f ", M2[l][c]);
        }
    printf("\n");
   }

 return 0; 
}