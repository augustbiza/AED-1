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

    int uniao[2*tam], dif[tam], soma[tam], prod[tam], inters[tam];
    
    int sim = 0;  //contador
    
    //uniao x+y
    
    for(int c = 0; c < 10; c++) {
        uniao[c] = x[c];
    }

    int p = 10;     //posicoes de uniao com elementos de Y

    for(int c = 0; c < 10; c++) {
        
        for(int i = 0; i < 10; i++) {

            if(y[c] == x[i]) {
                sim++;
            }
        }
        if(sim == 0) {
            uniao[p] = y[c];
            p++;
        }

        sim = 0;
    }

    //diferenca x-y
    int p2 = 0;
    for(int c = 0; c < 10; c++) {
        
        for(int i = 0; i < 10; i++) {
            if(x[c] == y[i]) {
                sim++;
            }
        }
        if(sim == 0) {
            dif[p2] = x[c];
            p2++;
        }
        sim = 0;
    }

    //soma[0] = x[0]+y[0]
    for(int c = 0; c < 10; c++) {
        soma[c] = x[c] + y[c];
    }

    //produto
    for(int c = 0; c < 10; c++) {
        prod[c] = x[c] * y[c];
    }

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


    return 0;
}
