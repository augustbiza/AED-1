//CALCULAR O PESO IDEAL DE UM HOMEM: (72.7 * altura) - 58

#include <stdio.h>

int main()
{//inicio main
    printf("Informe sua altura(metros): ");
    float altura;
    scanf("%f", &altura);

    float pesoIdeal = (72.7 * altura) - 58;

    printf("Seu peso ideal = %.0f kg\n", pesoIdeal);

  return 0;
}//fim main