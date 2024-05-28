//CALCULE A ÁREA DE UMA CIRCUNFERÊNCIA

#include <stdio.h>

int main()
{
    printf("Informe o raio da circunferencia: ");
    float raio;
    scanf("%f", &raio);

    float areacircunferencia = 3.14 * raio * raio;

    printf("A circunferencia de raio %.2f tem area = %.2f\n", raio, areacircunferencia);

  return 0;
}