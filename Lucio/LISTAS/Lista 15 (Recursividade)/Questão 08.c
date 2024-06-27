#include <stdio.h>
#include <stdlib.h>
//0 1 1 2 3 5 8 13 21 ... (TERMO)
//1 2 3 4 5 6 7  8  9 ... (POSIÇÃO)
void leiaX(int *p) {
    printf("Qual termo de fibonacci? ");
    scanf("%d", p);
}

int fibonacci(int n) {
    int fib;

        if(n == 1) fib = 0;//caso base

        else if(n == 2) fib = 1;//caso base

        else {
            fib = fibonacci(n-1) + fibonacci(n-2); //fib de 5 = fib de 4 + fib de 3
        }

    return fib;
}
/* n = 5

fib =  fibonacci(4)                                                                       +                fibonacci(3)
          fib = fibonacci(3)                              +      fibonacci(2)             +                    fib = fibonacci(2) + fibonnaci(1)
                   fib = fibonacci(2) + fibonnaci(1)      +           1                   +                               1       +      0
                              1       +      0            +           1                   +                               1      +       0   

*/


int main(void) {

    int x;
    leiaX(&x);

    int fib = fibonacci(x);
    printf("%d", fib);

    return 0;
}








/*
int n = 4, n1 = 0, n2 = 1, n3, aux;

    for(int c = 0; c < n; c++) {
        n3 = n1 + n2;
        aux = n2;
        n1 = aux;
        n2 = n3;
    }
    printf("%d", n3);

EXEMPLO
n3 = 1  n1 = 1 n2 = 1
n3 = 2  n1 = 1 n2 = 2
n3 = 3  n1 = 2 n2 = 3
n3 = 5

*/