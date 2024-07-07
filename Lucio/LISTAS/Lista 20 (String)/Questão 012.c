//biblioteca string.h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20

void leia(char *s) {
    printf("Informe uma frase: ");
    fgets(s, TAM, stdin);
}

int tamanho(char *s) {
    return strlen(s);
}


int main(void) {
    system("cls");

    char s[TAM];
    leia(s);

    printf("Tamanho = %d\n", tamanho(s));

    return 0;
}