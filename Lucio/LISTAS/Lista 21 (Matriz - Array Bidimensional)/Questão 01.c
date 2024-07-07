//
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


int main() { 
    system("cls");

   float M1[NUM_LIN][NUM_COL]; 
   leMatriz(M1);
 
   float M2[NUM_LIN][NUM_COL]; 
   leMatriz(M2);
   


 return 0; 
}