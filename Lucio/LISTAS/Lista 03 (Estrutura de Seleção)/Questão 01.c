//IDENTIFIQUE SE UM ANO É BISSEXTO OU NÃO
#include <stdio.h>

int main()
{
    int ano;

    do 
    {
        printf("Informe um ano: ");
        scanf("%d", &ano);
            if(ano < 0) printf("Ano Invalido!\n");
    }while(ano<0);

    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    {
        printf("Bissexto!\n");
    }
    else{
        printf("Nao Bissexto!\n");
    }
return 0;
}//fim main