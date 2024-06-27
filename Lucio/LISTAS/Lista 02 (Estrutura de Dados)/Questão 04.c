//CALCULE O PESO IDEAL DE HOMEMENS E MULHERES

#include <stdio.h>
#include<ctype.h>

int main()
{
  printf("DESCUBRA SEU PESO IDEAL!\n");

  float pesoIdeal, altura;
  char genero;

  do
    {
      printf("Qual o seu genero[M ou F] ?\n ");
      scanf(" %c", &genero);
      genero = toupper(genero);//transforma a letra minuscula em maiuscula de 'genero' dentro do codigo
    }
  while(genero!='M' && genero!='F');//fim do-while
 
  do
    {
      printf("Qual a sua altura?\n");
      scanf("%f", &altura);
    }
  while(altura<0);//fim do-while
  

  switch(genero)
    {
      case 'M': pesoIdeal = (72.7 * altura) - 58;
      break;
      case 'F': pesoIdeal = (62.1 * altura) - 44.7;
    }//fim sitch

  printf("Seu Peso Ideal = %.1f kg", pesoIdeal);

  return 0;
}//fim main