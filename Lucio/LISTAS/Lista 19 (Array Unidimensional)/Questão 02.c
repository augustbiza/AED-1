#include <stdio.h>
#include <stdlib.h>

const int tam = 5;

void guarda(float *v) {
    for(int c = 0; c < tam; c++) {
        printf("Informe o elemento %d: ", c+1);
        scanf("%f", &v[c]);
    }
}

void mostra(float *val) {
    for(int c = 0; c < tam; c++) {
        printf("%.1f  ", val[c]);
    }
}

int posicao(void) {
    int p;
    do {
        printf("Informe a posicao que deseja trocar: ");
        scanf("%d", &p);
    }while(p <= 0 || p > tam);
}

void troca(float *v, int p1, int p2) {
    for(int c = 0; c < tam; c++) {
        float aux = v[p1];
        v[p1] = v[p2];
        v[p2] = aux;
    }
}


int main(void) {
    system("cls");

    float val[tam];

    //guardar valores no vetor
    guarda(val);

    mostra(val);
    printf("\n");

    int p1 = posicao();
    int p2 = posicao();

    //trocar dois elementos de lugar em posições escolhidas
    troca(val, p1-1, p2-1); // posicão-1 porque a posição 1 do usuário seria a posição 0 do vetor

    mostra(val);
    printf("\n");

    return 0;
}