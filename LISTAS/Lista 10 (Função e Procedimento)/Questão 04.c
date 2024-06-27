//CALCULE PESO IDEAL UTILIZANDO FUNÇÃO
#include<stdio.h>
#include<ctype.h>

void titulo(){
    printf("CALCULE PESO IDEAL UTILIZANDO FUNÇÃO!\n");
}

char leiaGenero(){
    char genero;
    do{//rejeitar genero invalido
        printf("Informe o genero[f/m]: ");
        scanf(" %c", &genero);
        genero = tolower(genero);//se digitar letra maiuscula ela vira minuscula
            if(genero != 'f' && genero != 'm'){
            printf("Genero Invalido!\n\n");
            }
    }while(genero != 'f' && genero != 'm');
    return genero;// fim 'leiagenero' = retorna caracter de 'genero' para a main
}

float leiaAltura(){
    float altura;
    do{//rejeitar altura negativa
        printf("Informe a altura: ");
        scanf("%f", &altura);
            if(altura <= 0){
                printf("Altura Invalida!\n\n");
            }
    }while(altura <= 0);
    
    return altura;// fim 'leiaaltura' = retorna valor de 'altura' para a main
}

float calculaPeso(char genero, float altura){// genero(main) = genero(calculaPeso) // altura(main) = altura(calculaPeso)
    float pesoIdeal;
        if(genero == 'f'){
            pesoIdeal = (62.1 * altura) - 44.7;
        }
        else{
            pesoIdeal = (72.7 * altura) - 58;
        }
    return pesoIdeal;//retorna valor de 'pesoIdeal' para a main
}

int main(){
    
    titulo();

    char genero = leiaGenero();
    float altura = leiaAltura();

    float pesoIdeal = calculaPeso(genero, altura);//'genero' e 'altura' são levados para a função 'calculaPeso'

    printf("Peso ideal = %.1fkg", pesoIdeal);

    return 0;
}