
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
void mostrarNotas(float *notas, int qtAlunos) {
    for(int c = 0; c < qtAlunos; c++) {
        printf("%.1f - ", notas[c]);
        if(notas[c] >= 6) {
            printf("APROVADO!");
        } else {
            printf("REPROVADO!");
        }
        printf("\n");
    }
}

void mediaNotas(float *notas, int qtAlunos) {//ou (float notas[], int qtAlunos)
    float soma = 0;
    
    for(int c = 0; c < qtAlunos; c++) {
        soma += notas[c];
    }
    float media = soma / qtAlunos;
    printf("Media da turma = %.1f\n", media);
}

void maior_menor_Nota(float *notas, int qtAlunos) {
    float maiorNota = notas[0];
    float menorNota = notas[0];

    for(int c = 0; c < qtAlunos; c++) {
        if(notas[c] < menorNota) menorNota = notas[c];

        if(notas[c] > maiorNota) maiorNota = notas[c];
    }
    printf("Menor nota = %.1f\nMaior nota = %.1f\n\n", menorNota, maiorNota);
}


int main(void) {
    system("cls");

    //quantidade de alunos
    int alunos = qtAlunos();

    float notas[alunos];

    //informar as notas
    guardarNotas(notas, alunos);

    //mostra notas e status(aprovado/reprovado)
    mostrarNotas(notas, alunos);

    //mosta a média das notas
    mediaNotas(notas, alunos);

    //mostra as notas maior e menor
    maior_menor_Nota(notas, alunos);

    return 0;
}
