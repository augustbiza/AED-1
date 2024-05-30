//Percentual de numeros pares entre 1.000 e 10.000 (flag)
#include <stdio.h>

int  main(){

    int numero, qtTotal = 0, qtPar = 0;

    while (numero != 0)
    {
        printf("Infome o numero: ");
        scanf("%i", &numero);

        if(numero >= 1000 && numero <= 10000){
            if(numero % 2 == 0){
                qtPar++;
            }

            qtTotal ++;
        }
    }// fim flag

    float percentPar = (float) qtPar / qtTotal * 100;
    printf("Percentual de pares = %.1f %%", percentPar);

    return 0;
}