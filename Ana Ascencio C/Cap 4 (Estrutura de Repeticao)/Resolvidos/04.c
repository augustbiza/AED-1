#include <stdio.h>

int main(void) {

    int a, b, aux;
    for(int c = 0; c < 5; c++) {
        printf("\n(a,b)? ");
        scanf("%d%d", &a, &b);
        aux = a;
        while(aux <= b) {
            if(aux % 2 == 0) printf("%d  ", aux);
            aux++;
        }

    }
    
    return 0;
}
