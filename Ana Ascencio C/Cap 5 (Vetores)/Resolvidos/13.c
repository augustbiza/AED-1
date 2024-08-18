#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define TAM 10

void lerArray(int *v) {
    for(int c = 0; c < TAM; c++) {
        printf("num:  ");
        scanf("%d", &v[c]);
    }
}

void procurar(int *v, int *cinq, int *pos, int chave, int *qt) {
    int i = 0, c = 0;
    
    while(c < TAM) {
        if(v[c] > chave) {
            cinq[i] = v[c];
            pos[i] = c;
            i++;
        }
        c++;
    }
    *qt = i-1;
}

void mostrar(int *cinq, int *pos, int qt) {
    int i = 0;
    while(i < qt) {
        printf("pos: %d - num: %d\n", pos[i], cinq[i]);
        i++;
    }
}


int main(void) {

    int *v = (int*)malloc(TAM * sizeof(int));
    lerArray(v);

    int chave;
    printf("chave: ");
    scanf("%d", &chave);

    int *cinq = (int*)malloc(TAM * sizeof(int)), *pos = (int*)malloc(TAM * sizeof(int)), qt;
    procurar(v, cinq, pos, chave, &qt);

    if(qt > 0) {

        mostrar(cinq, pos, qt); 
    }
    else printf("Chave nao se encontra no vetor\n");


    free(v);
    free(cinq);
    free(pos);

    return 0;
}