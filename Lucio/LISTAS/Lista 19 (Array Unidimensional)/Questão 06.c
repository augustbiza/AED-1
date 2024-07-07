
#include <stdio.h>
#include <stdlib.h>


void leiaMes(int *m) {
    *m = 1;
    do {
        printf("Informe o mes(1-12): ");
        scanf("%d", m);
            if(*m < 0 || *m > 12) printf("Mes invalido!\n\n");
    }while(*m < 0 || *m > 12);
    

}

int diasMes(int m) {

    if(m != 0) {
        int dias;
        
        if(m <= 7) {
            if(m == 2) dias = 28;
            else {
                if(m % 2) dias = 31;
                else dias = 30;
            }
        }
        else {
            if(m % 2) dias = 30;
            else dias = 31;
        }
        printf("\nMes %d = %d dias\n", m, dias);
    }
}

int main(void) {
    system("cls");

    int m;
    do {
        leiaMes(&m);

        diasMes(m);

    }while(m != 0);
    

    return 0;
}