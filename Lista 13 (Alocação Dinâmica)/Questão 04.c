// p1 = maior < 'm'  e  p2 = menor > 'm'
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void primo(int m, int *p1, int *p2 ) {

    //maior primo menor que 'm'
    int maiorprimo = m-1;//maior primo comeca com o m-1
    int contP1 = 0;//contador que vai fazer sair do for quando achar o primeiro numero primo
    while(contP1 < 1) {//enquanto esse contador ainda estiver zerado faca as divisoes do for para verificar se é primo
        for(int c = 2; c <= maiorprimo/2; c++) {
            if(maiorprimo % c != 0){//se o numero for primo...
                *p1 = maiorprimo;//...coloque o valor desse número em 'p1'...
                contP1++;//...adicione 1 ao contador para sair do for e parar de verificar se o prox num é primo
            }
            else {//se o numero não for primo
                maiorprimo--;//diminua um no número e repita o processo de verificar se é primo
            }
        }
    }

    //menor primo maior que 'm'
    int menorprimo = m+1;//menor primo comeca com m+1
    int contP2 = 0;//contador para sair do for quando achar o primeiro numero primo
    while(contP2 < 1) {//enquanto esse contador estiver zerado faca as divisoes do for para verificar se é primo
        for(int c = 2; c <= menorprimo/2 ; c++) {
            if(menorprimo % c != 0) {//se o numero for primo...
                *p2 = menorprimo;//coloque o valor desse numero em 'p2'...
                contP2++;//...adicione 1 ao contador para sair do for
            }
            else {//se o numero não for primo
                menorprimo++;//diminua um no numero e repita o processo de verificar se é primo
            }
        }
    }
    
}

void leiaVal(int *m) {
    printf("Informe o valor de 'm': ");
    scanf("%d", m);
}


int main(void) {

    int m, p1, p2;
    leiaVal(&m);

    primo(m, &p1, &p2);

    printf("Maior primo < %d = %d\nMenor primo > %d = %d", m, p1, m, p2);

    return 0;
}