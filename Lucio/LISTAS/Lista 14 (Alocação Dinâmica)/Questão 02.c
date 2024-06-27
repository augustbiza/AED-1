//PESO IDEAL (MALLOC)
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void leiaGen (char *genero) {
    printf("Informe seu genero:");
    scanf("%c", genero);
    *genero = tolower(*genero);
}

void leiaAltura(float *alt) {
    printf("Informe sua altura(metros): ");
    scanf("%f", alt);
}


void calculaPesoIdeal(float genero, float altura, float *pesoIdeal) {
    if(genero == 'm') {
        *pesoIdeal = (72.7 * altura) - 58;
    }
    else if(genero == 'f') {
        *pesoIdeal = (62.1 * altura) - 44.7;
    }
}

int main (void) {

    float *pesoIdeal = (float*)malloc(sizeof(float));//peso ideal geral

    char *gen = (char*)malloc(sizeof(char));//genero
    leiaGen(gen);//guardar genero

    float *altura = (float*)malloc(sizeof(float));
    leiaAltura(altura);//guardar altura

    calculaPesoIdeal(*gen, *altura, pesoIdeal);   
    
    printf("Peso Ideal = %.1f", *pesoIdeal);
    return 0;
}