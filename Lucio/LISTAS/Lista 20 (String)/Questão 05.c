//biblioteca string.h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 15

void leia(char *s) {
    printf("Insira a string: ");
    fgets(s, TAM, stdin);
}

int compare(char *a, char *b) {
    return strcmp(a,b);
}


int main(void) {

    char a[TAM], b[TAM];
    leia(a);
    leia(b);

    int n = compare(a, b);
        if(n != 0) printf("Diferentes!\n");
        else printf("Iguais!\n");

    return 0;
}