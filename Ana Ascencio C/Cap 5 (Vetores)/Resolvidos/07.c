#include <stdio.h>
//#define tam 10

void crescente(int *v, int x) {
    int aux;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < x; j++) {
            if(v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

void decrescente(int *v, int x) {
    int aux;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < x; j++) {
            if(v[i] < v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

}

void mostrar(int *v, int x) {

}

int main(void) {

    int v[8] = {2,1,4,5,7,8,6,3};

    decresce(v, 8);
    mostrar(v, 8);
    printf("\n");
    crescente(v, 8);
    mostrar(v, 8);
    printf("\n");

    return 0;
}