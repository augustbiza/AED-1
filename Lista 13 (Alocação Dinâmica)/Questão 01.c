//SOMA DE DOIS NÚMEROS (alocação dinâmica)
#include <stdio.h>
#include <stdlib.h>//alocação dinâmica biblioteca

int main(void) {

    int *num1;
    num1 = (int*)malloc(sizeof(int));
        *num1 = 10;

    int *num2 = (int*)malloc(sizeof(int));
        *num2 = 7;

    int *soma;
    *soma = *num1 + *num2;

    printf("%d\n", *soma);

    return 0;
}