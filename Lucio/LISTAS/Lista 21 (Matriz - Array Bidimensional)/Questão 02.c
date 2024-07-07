//fazer uma cópia da matriz
#include <stdio.h>
#include <stdlib.h>
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


int main() { 
    system("cls");

    float M1[NUM_LIN][NUM_COL]; 
    leMatriz(M1);
 
    float M2[NUM_LIN][NUM_COL]; 
    
    copia(M1, M2);

    

 return 0; 
}