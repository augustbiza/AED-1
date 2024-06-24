#include <stdio.h>
#include <stdlib.h>

void leiaVal(int *pn) {
    printf("Informe o valor final: ");
    scanf("%d", pn);
}

void decrescente (int n) {
    if(n >= 0) {
        printf("%d ", n);  //instrução 1
        decrescente(n-1);  //instrução 2
    }
}

int main(void) {
    
    int *n = (int*)malloc(sizeof(int));
    leiaVal(n);

    decrescente(*n);
    return 0;
}

//n = 2
//instrução 1
//TELA: 2
//Instrução 2
//n = 1
//instrução 1
//TELA: 2 1
//instrução 2
//n = 0
//instrução 1
//TELA: 2 1 0
//instrução 2
//n = -1
//sai do if