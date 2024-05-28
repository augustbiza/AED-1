//IDENTIFIQUE SE UM NÚMERO É ÍMPAR OU PAR

#include <stdio.h>

int main()
{
    printf("Informe um numero inteiro: ");
    int numero;
    scanf("%d", &numero);
        if(numero % 2 == 0) printf("PAR!\n");
        else printf("IMPAR!\n");
  return 0;

  /*ou
  if(numero % 2) printf("IMPAR\n");
  else printf("PAR!\n");
  */
}//fim main