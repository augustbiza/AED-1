//IDENTIFIQUE O SEGUNDO MAIOR ENTRE TRÊS VALORES

#include<stdio.h>

int main()
{
    printf("IDENTIFIQUE O SEGUNDO MAIOR ENTRE TRÊS VALORES\n");

    printf("Digite tres numeros: ");
    float numero1, numero2, numero3;
    scanf("%f%f%f", &numero1, &numero2, &numero3);

    float segundoMaior = numero1;

        if(numero1 > numero2 && numero1 > numero3)
        {//numero1 maior
            if(numero2 > numero3)
            {
                segundoMaior = numero2;
            }
            else
            {
                segundoMaior = numero3;
            }
        }//fim numero1 maior

        else if(numero2 > numero1 && numero2 > numero3)
        {//numero2 maior
            if(numero3 > numero1)
            {
                segundoMaior = numero3;
            }
        }//fim numero2 maior

        else if(numero3 > numero1 && numero3 > numero2)
        {//numero3 maior
            if(numero2 > numero1)
            {
                segundoMaior = numero2;
            }
        }//fim numero3 maior
        printf("O segundo maior = %.2f", segundoMaior);

    return 0;

}//fim main