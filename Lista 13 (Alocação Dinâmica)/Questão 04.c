
#include <stdio.h>
#include <stdlib.h>

void leiaVal(int *val) {
    do{
        printf("Informe o valor de 'm': ");
        scanf("%d", val);
        if (*val < 0) printf("Insira um valor nao negativo!\n\n");        
    }while(*val < 0);
    
}
void primo(int val, int *ptr1, int *ptr2) {
    int menorPrimoSup = 0, maiorPrimoInf = 0, c = 0;
    
    for(c = 2; c < val; c++) {
        
        if(val % c != 0) maiorPrimoInf = c;
    }
    printf("> primo < m = %d", maiorPrimoInf);

    while(menorPrimoSup <= val) {
        if(val % c != 0) menorPrimoSup = c;
    }

    *ptr1 = maiorPrimoInf;
    *ptr2 = menorPrimoSup;
}

int main (void) {

    int m, p1, p2;
    leiaVal(&m);


    primo(m, &p1, &p2);

    printf("p1 = %d\np2 = %d", p1, p2);

    return 0;
}