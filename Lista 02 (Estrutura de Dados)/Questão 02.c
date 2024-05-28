//IDENTIFIQUE O MAIOR ENTRES TRÊS NÚMEROS REAIS

#include <stdio.h>

int main()
{
    printf("Informe tres numeros reais: ");
    float num1, num2, num3;
    scanf("%f%f%f", &num1, &num2, &num3);
    float maior = num1;

        if(num2>maior && num2>num3) maior = num2;
        if(num3>maior && num3>num2) maior = num3;

    printf("Maior numero = %.2f", maior);

  return 0;
}//fim main