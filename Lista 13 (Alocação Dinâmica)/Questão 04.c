// p1 = maior < 'm'  e  p2 = menor > 'm'
#include <stdio.h>
#include <stdlib.h>

void leiaVal(int *val) {
    printf("Informe o valor de 'm': ");
    scanf("%d", val);
}

void primo(int val, int *maiormenor, int *menormaior) {

    int c;
        for(c = 1; c < val; c++) {
            if(val % c != 0) {*maiormenor = c;}

            if((val + c) % c != 0) {*menormaior = val + c;}
        }
        
    printf("%d\n%d", *menormaior, *maiormenor);
}

int main(void) {

    int m, p1, p2 = 0;
    leiaVal(&m);

    primo(m, &p1, &p2);

    printf("%d\n%d", p1, p2);

    return 0;
}