//FIBONACCI RECURSIVO: 1 1 2 3 5 8 13 21 ...
#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    int fib;
        if(n == 1 || n == 2) {
            fib = 1;
        }
        else {
            fib = fibonacci(n-1) + fibonacci(n-2); 
        }
    return fib;
}

int main(void) {
    
    system("cls");

    int termo;
    printf("qual termo de fibonacci? ");
    scanf("%d", &termo);

    int fib = fibonacci(termo);
    
    printf("fib = %d", fib);

    return 0;
}