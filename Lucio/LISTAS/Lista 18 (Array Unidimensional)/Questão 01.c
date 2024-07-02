
#include <stdio.h>
#include <stdlib.h>

int qtAlunos(void) {
    int n;
    do {
        printf("Informe a quantidade de alunos: ");
        scanf("%d", &n);
    }while(n < 0 && n > 10);//intervalo de n° alunos
    
    return n;
} 

void guardarNotas(float notas[], int qtAlunos) {//ou (float *notas, int qtAlunos)
    for(int c = 0; c < qtAlunos; c++) {
        do {
            printf("Informe a nota do aluno %d: ", c+1);
            scanf("%f", &notas[c]);
                if(notas[c] < 0 || notas[c] > 10) printf("Valor impossivel!\n\n");
        }while(notas[c] < 0 || notas[c] > 10);
    }
}

void mostrarNotas(float *notas, int qtAlunos) {//ou (float notas[], int qtAlunos)
    float soma = 0;
    for(int c = 0; c < qtAlunos; c++) {
        printf("%.1f - ", notas[c]);
        soma += notas[c];
        if(notas[c] >= 6) {
            printf("APROVADO!");
        } else {
            printf("REPROVADO!");
        }
        printf("\n");
    }
    float media = soma / qtAlunos;
    printf("Media da turma = %.1f", media);
}

int main(void) {

    system("cls");

    int alunos = qtAlunos();

    float notas[alunos];

    guardarNotas(notas, alunos);

    mostrarNotas(notas, alunos);//mostra notas, média e qtaprovados

    return 0;
}