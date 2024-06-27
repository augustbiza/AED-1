//IDENTIFIQUE SE UM ANO É BISSEXTO OU NÃO com flag = 0 encerra
#include <stdio.h>
#include <ctype.h>

int main()
{   
    char escolha = 's';
    while(escolha == 's'){//enquanto escolha for 's' vai fazer o calculo do ano bissexto
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

        printf("Deseja continuar[s/n] ?  ");
        scanf(" %c", &escolha);
        escolha = tolower(escolha);

    }//fim flag
    
return 0;
}//fim main