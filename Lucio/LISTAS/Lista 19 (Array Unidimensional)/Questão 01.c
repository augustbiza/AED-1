#include <stdio.h>
#include <stdlib.h>

const int tam = 5;

void guardarValor(float *val) {
    for(int c = 0; c < tam; c++) {
        printf("Insira o elemento %d: ", c+1);
        scanf("%f", &val[c]);
    }
}

void mostraVetor(float *val) {
    for(int c = 0; c < tam; c++) {
        printf("%.1f  ", val[c]);
    }
}

void troca(float *val) {
    float aux = val[0];
    val[0] = val[tam-1];//primeiro elemento (s=0) atribui valor do ultimo elemento(s = tam-1)
    val[tam-1] = aux;//último elemento (s = tam-1) atribui valor do primeiro elemento guardado na variavel auxiliar
}


int main (void) {
    system("cls");

    float val[tam];

    //guardar valores dentro do vetor
    guardarValor(val);

    mostraVetor(val);

    printf("\n");

    //trocar o primeiro com o último valor
    troca(val);

    mostraVetor(val);

    return 0;
}