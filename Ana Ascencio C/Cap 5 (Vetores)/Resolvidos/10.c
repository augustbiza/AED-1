#include <stdio.h>
#include <ctype.h>
#define tam 10

int escolhaAluno() {
    int op;
    printf("Qual o numero do aluno(1-5 / 0-sair): ");
    scanf("%d", &op);

    return op;
}

void lerProva(char *p) {
    printf("Informe as respostas:\n");
    for(int c = 1; c <= tam; c++) {
        printf("Resposta %d:  ", c);
        scanf(" %c", &p[c-1]);
        p[c-1] = tolower(p[c-1]);
    }
}

int compararProva(char *p, char *g) {
    int nota = 0;
    for(int c = 0; c < tam; c++) {
        if(p[c] == g[c]) nota++;
    }

    return nota;
}

void  mostrarNota(int nota) {
    printf("Nota: %d\n",nota);
    if(nota < 6) printf("Reprovado");
    else printf("Aprovado");
    printf("\n\n");
}


int main(void) {

    char gabarito[tam] = {'a','b','d','e','d','c','a','b','e','c'};     //10notas
    char prova[tam];    //10notas

    int op = escolhaAluno();
    while(op != 0) {

        lerProva(prova);
        int n = compararProva(prova, gabarito);
        mostrarNota(n);

        op = escolhaAluno();
    }

    


    return 0;
}

/*
char gabarito[tam] = 1-a / 2-c / 3-b / 4-a

char provas[tam] = 1-d / 2-c / 3-b / 4-e


*/
