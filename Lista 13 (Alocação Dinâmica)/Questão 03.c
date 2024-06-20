
#include <stdio.h>
#include <stdlib.h>

void leiaVal (int * ptrN) {
    printf("Valor de 'n' = ");
    scanf("%d", ptrN);
}

void teste(int val, int *pB, int *pK) {//ponteiros que apontam para o local em que os ponteiros da main apontam
    int menorB = val;

    if(val >= 0) { //n positivo
        for(int c = 0; c < val; c++) {//fixo o B e percorro o K e faço as multiplicacoes até ambos se igualarem ao valor de 'n'ou'val' 0x0,0x1,...nxn
        *pB = c;
        for(int c2 = 0; c2 < val; c2++) {
            *pK = c2;

                if((*pB) * (*pK) == val) {
                    printf("B = %d\nK = %d\n\n", *pB, *pK);
                    if(*pB < *pK && menorB > *pB) {
                        menorB = *pB;
                    }
                }
        }
    }
    printf("Menor B = %d", menorB);
    }

    if(val < 0) { //n negativo
        for(int c = 0; c < val; c++) {
            *pB = -c;
            for(int c2 = 0; c2 < val; c++) {
                if((*pB) * (*pK) == val) {
                    printf("B = %d\nK = %d\n\n", *pB, *pK);
                }
            }
        }

    }
    
}

int main(void) {

    int n, b, k;
    
    leiaVal(&n);//passagem por referência

    teste(n, &b, &k);//passagem: valor, referência, referência



    return 0;
}