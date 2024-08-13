#include <stdio.h>
#include <stdbool.h>
#define tam 10

void decrescente(int v[]) {
    int aux;
    for(int c = 0; c < tam; c++) {
        for(int i = c+1; i < tam; i++) {
            if(v[c] < v[i]) {
                aux = v[c];
                v[c] = v[i];
                v[i] = aux;
            }
        }
    }
}
void crescente(int *v) {
    int aux;
    for(int c = 0; c < tam; c++) {
        for(int i = c+1; i < tam; i++) {
            if(v[c] > v[i]) {
                aux = v[c];
                v[c] = v[i];
                v[i] = aux;
            }
        }
    }
}

void mostrar(int *v) {
    for(int c = 0; c < tam; c++) {
        printf("%d ", v[c]);
    }
}


int main(void) {

    int v[tam] = {2,1,4,5,7,6,8,9,0,3};

    decrescente(v);
    mostrar(v);
    printf("\n");

    crescente(v);
    mostrar(v);
    printf("\n");

    return 0;
}