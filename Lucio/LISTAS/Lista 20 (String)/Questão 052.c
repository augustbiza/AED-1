//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TAM 15

void leia(char *s) {
    printf("Insira a string: ");
    fgets(s, TAM, stdin);
}

bool comparar(char *a, char *b) {
    bool iguais = true;
    int i = 0;
    while((a[i] != '\0' || b[i] != '\0') && iguais) {
        if(a[i] != b[i]) iguais = false;
        i++;
    }

    return iguais;
}


int main(void) {
    system("cls");

    char a[TAM], b[TAM];
    leia(a);
    leia(b);

    if(comparar(a, b)) printf("Iguais!\n\n");
    else printf("Diferentes!\n\n");

    return 0;        
}