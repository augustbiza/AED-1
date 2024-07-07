#include <stdio.h>
#include <stdlib.h>
#define TAM 15

void leia(char *s) {
    printf("Insira uma string: ");
    fgets(s, TAM, stdin);
}

void vogais(char *s, char *v) {
    
    int vog[5] = {'a','e','i','o','u'};

    int i = 0, pos = 0;

    while(i < TAM) {
        
        for(int c = 0; c < TAM; c++) {
            if(s[i] == vog[c]) {
                v[pos] = vog[c];
                pos++;
            }
        }

        i++;
    }

    for(int c = 0; c < pos; c++) {
        printf(" %c ", v[c]);
    }

    printf("\n\n");

    int n[pos];
        for(int c = 0; c < pos; c++) {
            if(v[c] == 'a') n[c] = 0;
            else if(v[c] == 'e') n[c] = 1;
            else if(v[c] == 'i') n[c] = 2;
            else if(v[c] == 'o') n[c] = 3;
            else if(v[c] == 'u') n[c] = 4;
        }

    for(int c = 0; c < pos; c++) {
        printf("%d ", n[c]);
    }
}


int main(void) {
    system("cls");

    char s[TAM];
    leia(s);

    char v[TAM];

    vogais(s, v);
    
    
    return 0;
}

/*

está com erro
imprimindo corretamente as posicoes das vogais POREM IMPRIME OUTROS NUMEROS JUNTOS

*/