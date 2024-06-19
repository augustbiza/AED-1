//SOMA DE DOIS NÚMEROS (FUNÇÃO E MALLOC)
#include <stdio.h>
#include <stdlib.h>

void titulo() {
    printf("Soma de dois números (função e malloc)!\n");
}

void leiaNum(int *p) {
    printf("Informe um número: ");
    scanf("%d", p);
}

void facaSoma(int *result, int num1, int num2) {
    *result = num1 + num2;
}

int main(void) {

    titulo();

    int *a = (int*)malloc(sizeof(int));
    int *b = (int*)malloc(sizeof(int));

    leiaNum(a);
    leiaNum(b);

    int *soma = (int*)malloc(sizeof(int));

    facaSoma(soma, *a, *b);
    printf("%d\n", *soma);

    free(a);
    free(b);
    free(soma);

    return 0;
}