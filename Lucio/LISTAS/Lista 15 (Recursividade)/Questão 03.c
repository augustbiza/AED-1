#include <stdio.h>

void leiaVal(int *pa, int *pb) {
    printf("Informe o limite inferior: ");
    scanf("%d", pa);
    printf("Informe o limite superior: ");
    scanf("%d", pb);
}

void sequencia(int ini, int fin) {
    if(ini <= fin) {
        printf("%d ", ini);
        sequencia(ini+1, fin);
        printf("%d ", ini);
    }
}

int main(void) {

    int a, b;
    leiaVal(&a, &b);
    sequencia(a,b);


    return 0;
}