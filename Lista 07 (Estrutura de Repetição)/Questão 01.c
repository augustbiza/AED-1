//PERFIL DA TURMA
/*percent (h e m); num +18, idade (+ e -)*/
#include<stdio.h>
#include<stdbool.h>
#include <ctype.h>

int main(){
    char genero;
    int numeroAlunos, numeroHomens = 0, numeroMulheres = 0, idade, maisVelho = 0, maisNovo = 100, adultos = 0;
    float percentualHomens, percentualMulheres;

    do{//rejeitar numero negativo de alunos 
        printf("Informe a quantidade de alunos: ");
        scanf("%d", &numeroAlunos);
    }while(numeroAlunos <= 0);

    for(int c = 0; c < numeroAlunos; c++){
        do{//rejeitar genero invalido
        printf("Qual seu genero? [f/m]");
        scanf(" %c", &genero);
            if(genero != 'm' && genero != 'f'){//mensagem de erro
                printf("Genero Invalido!\n\n");
            }
        }while(genero != 'm' && genero != 'f');

            if(genero == 'f'){//numero de mulheres
                numeroMulheres++;
            }
            else{//numeros de homens
                numeroHomens++;
            }

        do{//rejeitar idade negativa ou maior que 100
        printf("Qual sua idade? ");
        scanf("%d", &idade);
        }while(idade <= 0 || idade > 100);

            if(idade >= 18){//maiores de 18
                adultos++;
            }
            if(idade > maisVelho){//maior idade
                maisVelho = idade;
            }
            if(idade < maisNovo){//menor idade
                maisNovo = idade;
            }

        
    }//fim for

    percentualHomens = ((float)numeroHomens / (float)numeroAlunos) * 100;
    percentualMulheres = ((float)numeroMulheres / (float)numeroAlunos) * 100;

    printf("Percentual de Homens = %.1f\nPercentual de Mulheres = %.1f\nAdultos = %d\nMaior Idade = %d\nMenor idade = %d", percentualHomens, percentualMulheres, adultos, maisVelho, maisNovo);

    return 0;
}