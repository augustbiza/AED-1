#include <stdio.h>

void leiaVal(int *pn, int *pm) {
    printf("Informe o valor inicial: ");
    scanf("%d", pn);
    printf("Informe o valor de final: ");
    scanf("%d", pm);
}

int somaLimites(int inf, int sup) {
    int soma;
    if(inf == sup-1) {
        soma = inf + sup;
    }
    else {
        soma = somaLimites(inf+1, sup);
    }

    return soma;
}

int main(void) {

    int n, m;
    leiaVal(&n, &m);

    int soma = somaLimites(n, m);
    printf("Soma de %d ate %d = %d", n, m, soma);

    return 0;
}