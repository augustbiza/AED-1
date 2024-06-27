//SOMA DE DOIS NÚMEROS (FUNÇÃO E MALLOC)
#include <stdio.h>
#include <stdlib.h>

void titulo() {
    printf("Soma de dois numeros (malloc)");
}

void leiaNum(int *num) {//endereço na qual ponteiro aponta copiado em outro ponteiro (*num)
    printf("Informe um numero: ");
    scanf("%d", num);//altero o valor que esta no endereco na qual o ponteiro aponta
}

void facaSoma(int *result, int num1, int num2) {
    *result = num1 +  num2;//valor para qual o ponteiro aponta é a soma dos valores num1 e num2
}

int main (void) {
    titulo();

    int *a = (int*)malloc(sizeof(int));//ponteiro que aponta para um local que cabe int
    leiaNum(a);//passei endereço de memoria que o ponteiro aponta

    int *b = (int*)malloc(sizeof(int));
    leiaNum(b);

    int *soma = (int*)malloc(sizeof(int));//ponteiro que aponta para um local que cabe int
    facaSoma(soma, *a, *b);//parametros: endereço de memo que ponteiro soma aponta, valor que o ponteiro a aponta, valor que o ponteiro b aponta
    printf("soma = %d", *soma);

    return 0;
}