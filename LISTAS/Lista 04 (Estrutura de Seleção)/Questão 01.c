//COLOCAR TRÊS NÚMERO EM ORDEM DECRESCENTE
#include <stdio.h>

int main()
{
  printf("NUMEROS EM ORDEM CRESCENTE!\n");
  printf("Informe tres numeros inteiros:\n");
  int numero1, numero2, numero3;
  scanf("%d%d%d", &numero1, &numero2, &numero3);

  if(numero1 > numero2 && numero1 > numero3)
  {//inicio num1 >
    if(numero2 > numero3)
    {
      printf("%d > %d > %d", numero1, numero2, numero3);
    }
    else
    {
      printf("%d > %d > %d", numero1, numero3, numero2);
    }
  }//fim num1 >
  else if(numero2 > numero1 && numero2 > numero3)
  {//inicio num2 >
    if(numero1 > numero3)
    {
      printf("%d > %d > %d", numero2, numero1, numero3);
    }
    else
    {
      printf("%d > %d > %d", numero2, numero3, numero1);
    }
  }//fim num2 >
  else if(numero3 > numero1 && numero3 > numero2)
  {//inicio num3 >
    if(numero1 > numero2)
    {
      printf("%d > %d > %d", numero3, numero1, numero2);
    }
    else
    {
        printf("%d > %d > %d", numero3, numero2, numero1);
    }
  }//fim num3 >
    
  return 0;
}//fim main