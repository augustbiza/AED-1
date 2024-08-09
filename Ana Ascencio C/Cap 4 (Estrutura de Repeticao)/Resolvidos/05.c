#include <stdio.h>

int main(void) {

    int n, nA, nB;
    float a, aMaior, aMenor;

    printf("num: ");
    scanf("%d", &n);
    nA = n;
    nB = n;
    printf("altura: ");
    scanf("%f", &a);
    aMaior = a;
    aMenor = a;

    for(int c = 10; c > 1; c--) {
        printf("num: ");
        scanf("%d", &n);
            if(n > nA) nA = n;
            if(n < nB) nB = n;
        printf("altura: ");
        scanf("%f", &a);
            if(a > aMaior) aMaior = a;
            if(a < aMenor) aMenor = a;
    }
    printf("Maior altura = %.2f(%d)\n", aMaior, n);
    printf("Menor altura = %.2f(%d)\n", aMenor, n);

    return 0;
}
