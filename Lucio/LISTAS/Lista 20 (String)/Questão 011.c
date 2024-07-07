#include <stdio.h>
#include <stdlib.h>
#define TAM 20

void leia(char *s) {
    printf("Insira uma frase: ");
    fgets(s, 20, stdin);
}

int tamanho(char *s) {
    int i = 0, qt = 0;

    while(s[i] != '\0' && s[i] != '\n') {
        
        qt++;
        i++;
    }

    return qt;
}


int main(void) {
    system("cls");

    char s[TAM];
    leia(s);
    
    printf("Tamanho = %d\n", tamanho(s));

    return 0;
}