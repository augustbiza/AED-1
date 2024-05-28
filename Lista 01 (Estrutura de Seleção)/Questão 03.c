//CALCULE A TEMPERATURA EM FARENHEIT DADA EM CELSIUS: F = C x 1.8 + 32

#include <stdio.h>

int main()
{
    printf("Informe a temperatura em celsius: ");
    float celsius;
    scanf("%f", &celsius);

    float farenheit = celsius * 1.8 + 32;
    printf("%.1f celsius = %.1f farenheit\n", celsius, farenheit);

  return 0;
}