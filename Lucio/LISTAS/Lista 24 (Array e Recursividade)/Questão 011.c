//INVERTER VETOR - INTERATIVO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5

void inverter(int *m) {
    int i = 0, f = TAM - 1, aux;
    while(i < TAM/2) {
        aux = m[i];
        m[i] = m[f];
        m[f] = aux;

        i++;
        f--;
    }

    for(int c = 0; c < TAM; c++) {
        printf("%d", m[c]);
    }
}


int main(void) {
    int m[TAM] = {1,3,4,2,5};

    inverter(m);

    return 0;
}