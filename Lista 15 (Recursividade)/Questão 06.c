#include <stdio.h>
#include <stdlib.h>

void leiaVal(float *base, int *exp) {
    printf("Informe o valor da base:" );
    scanf("%f", base);
    printf("Informe o valor do expoente: ");
    scanf("%d", exp);
}

float potencia(float b, int e) {
    float aux = e;
    float pot;
    if(e == 0) pot = 1;//caso base se expoente = 0

    else if(e == 1) pot = b;//caso base

    else {
        pot = b * potencia(b, aux-1); //pot = base * base exp vezes até o expoente virar 1 e entrar no caso base onde if exp =1 -> pot = base
    }

    return pot;

/* b = 2 | e = 3

pot = 2 * poten(2, 2)
            pot = 2 * poten(2,1)
                        pot = 2 * 2

*/
}

int main(void) {

    float base;
    int expoente;

    leiaVal(&base, &expoente);

    float pot = potencia(base, expoente);
    printf("%.1f ^ %d = %.2f", base, expoente, pot);

    return 0;
}