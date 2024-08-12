#include <stdio.h>
#define tam 5

void crescente(int *v) {
    int aux;
    for(int i = 0; i < tam; i++) {
        for(int j = i+1; j < tam; j++) {
            if(v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

void intercalar(int *a, int *b, int *r) {
    int i = 0, par = 0, imp = 0;
    while(i < 2*tam) {
        if(i % 2) {
            r[i] = b[imp];
            imp++;
        }
        else {
            r[i] = a[par];
            par++;
        }
        i++;
    }
}

void mostrar(int *r) {
    for(int c = 0; c < 2*tam; c++) {
        printf("%d ", r[c]);
    }
    printf("\n\n");
}

void crescenteR(int *v) {
    int aux;
    for(int i = 0; i < 2*tam; i++) {
        for(int j = i+1; j < 2*tam; j++) {
            if(v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}


int main(void) {

    int a[tam] = {1,3,5,7,9}, b[tam] = {2,4,6,8,0}, r[2*tam];

    crescente(a);
    crescente(b);

    intercalar(a, b, r);
    mostrar(r);

    crescenteR(r);
    mostrar(r);

    return 0;
}