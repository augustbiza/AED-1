#include <stdio.h>
#include <stdlib.h>

float leiaSal() {
    float sal;
    printf("Informe o valor: ");
    scanf("%f", &sal);

    return sal;
}

float calculaSalL(float sal, float *pI, float *pT) {

    *pI = sal * 0.09;
    *pT = sal * 0.06;
    float salarioL = sal - (*pI) + (*pT);

    return salarioL;
}

int main(void) {

    float salB = leiaSal();
    float inss, transp;

    float salario = calculaSalL(salB, &inss, &transp);

    printf("Salario = %f\n", salario);
    printf("INSS = %f\n", inss);
    printf("Vale transp = %f", transp);


    return 0;
}