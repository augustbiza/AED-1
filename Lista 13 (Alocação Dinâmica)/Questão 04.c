// p1 = maior < 'm'  e  p2 = menor > 'm'
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void leiaVal(int *val) {
    printf("Informe o valor de 'm': ");
    scanf("%d", val);
}

//verifica se o numero é primo
bool primoVerif(int num) {
    for(int c = 2; c <= num/2; c++) {
        if(num % c == 0) return false;
        else return true;
    }
    
}

void primo(int val, int *maiormenor, int *menormaior) {

    *maiormenor = val - 1;
    *menormaior = val + 1;

    while(!primoVerif(*menormaior)) {
        *menormaior++;
    }

    while(!primoVerif(*maiormenor)) {
        *menormaior--;
    }

}


int main(void) {

    int m, p1 = 0, p2 = 0;
    leiaVal(&m);

    primo(m, &p1, &p2);

    printf("Maior primo < %d = %d\nMenor primo > %d = %d", m, p1, m, p2);

    return 0;
}