#include<stdio.h>

void sequencia(int n) {
    printf("%d ", n);

        if(n < 5) {                  //instrução 1
            sequencia(n+1);
        }

        printf("%d ", n);            //instrução 2
}

int main(void) {

    int n = 1;

    sequencia(n);

    return 0;
}

//faz a instrução 1
//TELA: 1
// 1 < 5 --> chamada recursiva

//faz a instrução 1 (segunda chamada)
//TELA: 1 2
// 2 < 5 --> chamada recursiva

//...

//faz a instrução 1 (quinta chamada)
//TELA: 1 2 3 4 5
// 5 < 5 --> FALSO
//faz a instrução 2
//TELA: 1 2 3 4 5 5

//volta para a chamada 4
//faz a instrução 2
//TELA: 1 2 3 4 5 5 4

//volta para a chamada 3
//faz a instrução 2
//TELA: 1 2 3 4 5 5 4 3

//...

//volta para a chamada 1
//faz a instrução 2
//TELA: 1 2 3 4 5 4 3 2 1

//volta para a main