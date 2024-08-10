#include <stdio.h>

int main(void) {

    int v[8] = {-1, 0, 5, -5, -8, 7, -10, 1}, p[8], n[8], pos = 0, neg = 0;

    for(int c = 0; c < 8; c++) {
        if(v[c] > 0) {
            p[pos] = v[c];
            pos++;
        }
        else if(v[c] < 0) {
            n[neg] = v[c];
            neg++;
        }
    }

    printf("Positivos: ");
    if(pos > 0) {
        for(int c = 0; c < pos-1; c++) {
        printf("%d ", p[c]);
        }
    }else printf("Nao tem");
    
    printf("\nNegativos: ");

    if(neg > 0) {
        for(int c = 0; c < neg-1; c++) {
        printf("%d ", n[c]);
        }
    }else printf("Nao tem");

    printf("\n");
    
    return 0;
}
