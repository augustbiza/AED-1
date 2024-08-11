#include <stdio.h>
#define tam 10

int main(void) {

    int x[tam], y[tam];

    for(int c = 0; c < 10; c++) {
        printf("x[%d] = ", c);
        scanf("%d", &x[c]);
    }
    for(int c = 0; c < 10; c++) {
        printf("y[%d] = ", c);
        scanf("%d", &y[c]);
    }

    int inters[tam];
    
    //intersecao
    int p3 = 0;
    for(int c = 0; c < 10; c++) {

        for(int i = 0; i < 10; i++) {
            if(x[c] == y[i]) {
                inters[p3] = x[c];
                p3++;
            }
        }
    }

    for(int c = 0; c < p3; c++) {
        printf("%d ", inters[c]);
    }


    return 0;
}