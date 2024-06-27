//TROQUE OS VALORES ENTRE DUAS VARIÁEIS UTILIZANDO PONTEIROS
//*ponteiro = valor
//ponteiro = endereço

#include<stdio.h>

void troca(int *aptr, int *bptr){
    //int *aptr = &a -- int *bptr = &b
    int aux = *aptr;
    *aptr = *bptr;//valor que o ponteiro 'aptr' aponta é = ao valor que o ponteiro 'bptr' aponta, ou seja, = 5 (-->) a = 5
    *bptr = aux;//valor que o ponteiro 'bptr' aponta é = ao valor 'aux' (antigo valor que 'aptr') aponta, ou seja, = 2 (-->) b = 2
}

int main(){
    int a = 2;
    int b = 5;
    printf("ANTES:\n a = %i e b = %i\n\n", a, b);// a = 2 e b = 5

    troca(&a, &b);
    printf("DEPOIS:\n a = %i e b = %i\n", a, b);// a = 5 e b = 2


    return 0;
}