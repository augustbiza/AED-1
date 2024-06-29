#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int tam = 3;
static int c = 0;

//classe
typedef struct
{
    int idade;
    char nome[50];

}Pessoa;



//apresentação
void comeca(void) {
    printf("Menu!\n");
}


int funcionalidadeMenu(void) {
    int tipo;
    printf("\nEscalha uma opcao:\n1-Cadastar aluno\n2-Listar aluno\n3-Media das idades da turma\nEu escolho:");
    scanf("%d", &tipo);

    return tipo;
}


void funcionalidadeComando(Pessoa a[], int n) {
    switch(n) {
            case 1: cadastrar(a); break;
            case 2: listar(a); break;
           // case 3: media(); break;
            default: printf("Opcao Invalida!\n\n");
        }
}

//cadastro
void cadastrar(Pessoa p[]) {
    printf("Informe seu nome: ");
    scanf("%s", &p[c].nome);
    printf("Informe sua idade: ");
    scanf("%i", &p[c].idade);
    c++;
}

//listagem
void listar (Pessoa p[]) {
    for(int i = 0; i < c; i++){
        printf("Aluno: %s  Idade: %d\n", p[i].nome, p[i].idade);
    }
}




int main(void) {

    system("cls");//limpeza

    comeca();

    Pessoa alunos[tam];//vetor 'alunos' do tipo 'Pessoa'

    int escolha;

    while(c < tam) {
        escolha = funcionalidadeMenu();
        funcionalidadeComando(alunos, escolha);
    }
    if(c = tam) {
        escolha = funcionalidadeMenu();
            if(escolha != 1) {
                funcionalidadeComando(alunos, escolha);
            }
            else {
                printf("Limite de cadastro atingido!\n\n");
            }
    }
    
            
    


    return 0;
}