//SOMA DE DOIS NÚMEROS (alocação dinâmica)
#include <stdio.h>
#include <stdlib.h>//alocação dinâmica biblioteca

int main(void) {

    int *num1;
    num1 = (int*)malloc(sizeof(int));
        *num1 = 10;

    int *num2 = (int*)malloc(sizeof(int));
        *num2 = 7;

    int *soma = (int*)malloc(sizeof(int));
    *soma = *num1 + *num2;

    printf("%d\n", *soma);

//liberar espaço na memória
    free(num1);
    free(num2);
    free(soma);

    return 0;
}