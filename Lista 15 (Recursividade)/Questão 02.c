#include<stdio.h>

void sequencia(int n) {
    printf("%d ", n);

        if(n < 5) {
            sequencia(n+1);
        }

        printf("%d ", n);//--> chama a função sequencia(n-1) nao sei o porquê
        //printf("%d ", n); 
        //printf("%d ", n);
}

int main(void) {

    int n = 1;

    sequencia(n);

    return 0;
}