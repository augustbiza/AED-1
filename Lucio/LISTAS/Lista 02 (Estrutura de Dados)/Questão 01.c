//IDENTIFIQUE O MAIOR ENTRES DOIS NÚMEROS REAIS

#include <stdio.h>

int main()
{
    printf("Informe dois numeros reais:\n");
    float num1, num2;
    scanf("%f %f", &num1, &num2);

        if(num1>num2) printf("%.2f e maior que %.2f!\n", num1, num2);
          else if(num2>num1) printf("%.2f e maior que %.2f!\n", num2, num1);
        else printf("Os numeros sao iguais!\n");
        
  return 0;
}//fim main