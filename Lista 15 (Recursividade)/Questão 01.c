#include <stdio.h>
#include <stdlib.h>

void crescente(int n) {

    printf("%d  ", n);
    
        if(n < 5) {
            crescente(n+1);
        }
}

int main(void) {

    int n = 1;
    crescente(n);

    return 0;
}