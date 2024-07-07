
#include <stdio.h>
#define TAM 10

void leia(int *v) {
    int i = 0;
    while(i < TAM) {
        printf("n = ");
        scanf("%d", &v[i]);
        i++;
    }
}

void mostrar(int *v) {
    int i = 0;
    while(i < TAM){
        printf("%d ", v[i]);
        i++;
    }
}

void decrescente(int *v) {
    for(int c = 0; c < TAM-1; c++) {
        int i = 0, aux;
    while(i < TAM-1) {
        if(v[i] < v[i+1]) {
            aux = v[i];
            v[i] = v[i+1];
            v[i+1] = aux;
        }
        i++;
    }
    }
}

int main(void) {

    int v[TAM];
    leia(v);
    printf("\n");

    decrescente(v);
    mostrar(v);
    printf("\n");

    return 0;
}