#include <stdio.h>

int main(void) {

    int pecas[10];
    float preco[10];
        for(int c = 0; c < 10; c++) {
            printf("Quantidade:");
            scanf("%d", &pecas[c]);
            printf("Preco:");
            scanf("%f", &preco[c]);
        }

    float total[10];
        for(int c = 0; c < 10; c++) {
            total[c] = pecas[c] * preco[c];
        }
    
    for(int c = 0; c < 10; c++) {
        printf("%.1f  ", total[c]);
    }

    return 0;
}
