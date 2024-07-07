//biblioteca string.h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 15

void leia(char *s) {
    printf("Insira uma string: ");
    fgets(s, TAM, stdin);
}

int vogais(char *s) {
    int v = 0;
    char vog[5] = {'a','e','i','o','u'};
        for(int i = 0; i < TAM; i++) {

            for(int j = 0; j < 5; j++) {
                if(s[i] == vog[j]) v++;
            }
        }

    return v;

}


int main(void) {

    char s[TAM];
    leia(s);

    printf("%s tem %d vogais\n", s, vogais(s));
}