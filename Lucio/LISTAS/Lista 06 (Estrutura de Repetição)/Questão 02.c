//ALUNOS SALA NOTAS
#include<stdio.h>
#include<stdbool.h>

int main(){

    int numeroAlunos, numeroAprovados = 0;
    float nota, somaNotas = 0, mediaNotas, percentualAprovados, maiorNota = -1, menorNota = 10;

    do{//rejeitar número negativo de alunos 
        printf("Informe a quantidade de alunos para a pesquisa: ");
        scanf("%i", &numeroAlunos);
            if(numeroAlunos <= 0){
                printf("Numero de alunos invalido!\n\n");
            }
    }while(numeroAlunos <= 0);

    
        for(int c = 0; c < numeroAlunos; c++){
            do{//rejeitar notas invalidas ]0,10[
                printf("Insira sua nota: ");
                 scanf("%f", &nota);
                    if(nota < 0 || nota > 10){
                    printf("Nota Invalida!\n\n");
                    }
            }while(nota < 0 || nota > 10);//fim do-while

                if(nota >= 0 && nota <6){
                    printf("Reprovado!\n");
                }//fim mensagem1
                else if(nota >= 6 && nota <= 10){
                    printf("Aprovado!\n");
                    numeroAprovados++;
                }//fim mensagem2

                if(nota > maiorNota){
                    maiorNota = nota;
                }//fim maior nota
                if(nota < menorNota){
                    menorNota = nota;
                }//fim menor nota

            somaNotas = somaNotas + nota;//soma das notas de todos os alunos
        }//fim for
    

    mediaNotas = somaNotas / numeroAlunos;
    percentualAprovados = ((float)numeroAprovados / (float)numeroAlunos) * 100;

    printf("Status Escolar\nMedia = %.1f\nMaior nota = %.1f\nMenor Nota = %.1f\nPorcentagem Aprovados = %.2f", mediaNotas, maiorNota, menorNota, percentualAprovados);

    return 0;
}