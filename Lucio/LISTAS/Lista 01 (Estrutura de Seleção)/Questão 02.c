//CALCULAR O PESO IDEAL DE UMA MULHER: (62.1 x altura) – 44.7

#include <stdio.h>

int main()
{
    printf("Informe sua altura(metros): ");
    float altura;
    scanf("%f", &altura);

    float pesoIdeal = (62.1 * altura) - 44.7;

    printf("Seu peso ideal = %.1f kg\n", pesoIdeal);

  return 0;
}