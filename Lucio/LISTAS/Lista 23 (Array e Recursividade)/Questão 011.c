//TAMANHO DA STRING - INTERATIVO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20

//bibioteca string.h
int tamanho(char *s) {
    return strlen(s);
}

//na mao
int tamanho2(char *s) {
    int i = 0, qt = 0;
    while(s[i] != '\0') {
        qt++;
        i++;
    }

    return qt;
}


int main(void) {

    char s[TAM] = "oi bom?";

    printf("%d\n", tamanho2(s));

    return 0;
}