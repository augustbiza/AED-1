#include <stdio.h>

void leiaVet(int *v, int tam) {
    printf("Informe %d numeros:\n", tam);
    for(int i = 0; i < tam; i++) {
        scanf("%d", &v[i]);
    }
}

void div(int *v, int *d) {
    int res[5], c = 0;
    for(int i = 0; i < 10; i++) {
        printf("Divisores de %d (do vetor): ", v[i]);
        for(int j = 0; j < 5; j++) {

            if(v[i] % d[j] == 0) {
                res[c] = d[j];
                c++;
            }
        }

        for(int k = 0; k < c; k++) {
            printf("%d  ", res[k]);
        }
        printf("\n");
        c = 0;
    }
}


int main(void) {

    int num[10], divisores[5];
    leiaVet(num, 10);
    leiaVet(divisores, 5);

    div(num, divisores);

    return 0;
}