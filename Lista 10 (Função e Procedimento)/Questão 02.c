//DIAS VIVIDOS UTILIZANDO FUNÇÃO
#include<stdio.h>

void titulo(){
    printf("DESCUBRA QUANTOS DIAS VOCE VIVEU!\n");
}

int anosVividos(){
    int idade;
    do{
        printf("Informe sua idade: ");
        scanf("%i", &idade);
            if(idade <= 0){
                printf("Informe uma idade valida!\n\n");
            }
    }while(idade <= 0);
    
    return idade;
}

int diasVividos(int idade){// int idade(diasVividos) = idade(main)
    int dias = idade * 365;
    return dias;// retorna o valor de 'dias' para a main
}

int main(){//INICIO MAIN
    titulo();

    int idade = anosVividos();
    int dias = diasVividos(idade);//dias terá o valor que retorna da função 'diasVividos' // idade é pasado como parâmetro para a função 'diasVividos'

    printf("Voce viveu %d dias (%d anos)", dias, idade);

    return 0;
}