//TAMANHO DA STRING - RECURSIVO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20

int tamanho(char *s) {
    int i = 0;

    if(s[i] == '\0') return 0;
    else return 1 + tamanho(&s[i+1]);

}




int main(void) {
    system("cls");

    char s[TAM] = "oi bom?";

    printf("%d\n", tamanho(s));

    return 0;
}