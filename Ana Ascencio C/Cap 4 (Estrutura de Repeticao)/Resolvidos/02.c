#include <stdio.h>

int main(void) {

    int n;
    printf("n: ");
    scanf("%d", &n);

    int c = 1;

    printf("1 + ");
    while(c <= n) {
        if(c < n) printf("1/%d! + ", c);
        else printf("1/%d!", c);
        c++;
    }

    return 0;
}