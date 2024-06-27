//VERIFICAR SE DOIS NUMEROS SAO PRIMOS ENTRE SI
#include <stdio.h>
#include <stdbool.h>

int main(){
  int num1, num2, divisores = 0;
  char escolha[4];
  

  do{//rejeitar valores negativos
    printf("Informe dois numeros:  ");
    scanf("%d%d", &num1, &num2);
      if(num1 <= 0 || num2 <= 0) printf("Insira numeros naturais positivos!\n\n");
  }while(num1 <= 0 || num2 <= 0);

  int c = 2;//dividir o numero por 'c' ate achar divisores


  while((divisores == 0) && ((c <= num1) || (c <= num2))){
    if((num1 % c == 0) && (num2 % c == 0)){
      divisores++;
    }
    c++;
  }//se ambos forem divisiveis por um mesmo 'c'--> divisores+1, logo saira do looping
   //'c' vai ate chegar ao numero total, ou 'num1' ou 'num2'

  if(divisores == 0) printf("Primos entre si!\n\n");
  else printf("Nao sao primos entre si!\n");

  return 0;
}