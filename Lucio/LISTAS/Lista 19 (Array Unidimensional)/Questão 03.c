#include <stdio.h>
#include <stdlib.h>

const int tam = 5;

void guardar(float *val) {
    for(int c = 0; c < tam; c++) {
        printf("Informe o valor do elemento %d: ", c+1);
        scanf("%f", &val[c]);
    }
}

void mostrar(float *val) {
    for(int c = 0; c < tam; c++) {
        printf("%.1f ", val[c]);
    }
}

void maiorFinal(float *val) {
    float maior = val[0];//maior tem o valor do primeiro elemento e vai ser comparado com os demais
    int posicao = 0;//posicao 'c' do elemento, vai servir pra guardar a posição do maior elemento
    float aux;

    for(int c = 0; c < tam; c++) {
        if(val[c] > maior) {
            maior = val[c];
            posicao = c;//posição do maior elemento
        }
    }

    if(posicao != tam-1) {//se a posição do maior não for a última, faça as trocas
        aux = val[tam-1];
        val[tam-1] = val[posicao];//ultima posição recebe o valor da posição do maior elemento
        val[posicao] = aux;//posição que era do maior vai ter o valor da última posição
    }

}


int main(void) {
    system("cls");

    float val[tam];

    //guardar valores no vetor
    guardar(val);

    mostrar(val); printf("\n");
    
    //deslocar o elemento de maior valor para a última posição
    maiorFinal(val);

    mostrar(val);

    return 0;
}