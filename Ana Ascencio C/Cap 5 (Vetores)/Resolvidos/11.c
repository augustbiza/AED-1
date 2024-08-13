#include <stdio.h>
#define tam 12

void lerTemp(float *t) {
    printf("Temperatura\n");
    for(int c = 0; c < tam; c++) {
        printf("Mes %d:  ", c+1);
        scanf("%f", &t[c]);
    }
}

void mostrar(int x, float f) {
    char *mes[] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    printf("%s\n%.1f graus\n", mes[x], f);
}

void maiormenor(float *t) {
    float maior = t[0], menor = t[0];
    int posMaior = 0, posMenor = 0;

    for(int c = 0; c < tam; c++) {
        if(t[c] < menor) {
            menor = t[c];
            posMenor = c+1;
        }
        if(t[c] > maior) {
            maior = t[c];
            posMaior = c+1;
        }
    }
    mostrar(posMenor, menor);
    printf("\n");
    mostrar(posMaior, maior);

}

int main(void) {

    float temp[tam];
    lerTemp(temp);

    maiormenor(temp);

    return 0;
}