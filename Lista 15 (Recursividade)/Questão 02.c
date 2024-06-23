#include <stdio.h>

void seqDecre(int n) {

    printf("%d  ", n);

        if(n>1) {
            seqDecre(n-1);
        }
}

int main(void) {

    int n = 5;

    seqDecre(n);


    return 0;
}