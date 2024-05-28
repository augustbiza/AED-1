//ALUNOS(%) APROVADOS E REPROVADOS COM FLAG(0-encerra)
#include <stdio.h>

int main(){

    float nota;
    int total = 0, aprovados = 0;

    while(nota != 0){
        do{
            printf("Informe sua nota: (0-sair)");
            scanf("%f", &nota);
                if(nota < 0 || nota > 10){
                    printf("Insira uma nota valida!\n\n");
                }
                else if(nota >= 6 && nota <= 10){
                    aprovados++;
                }
        }while(nota < 0 || nota > 10);

        if(nota != 0){//caso a nota for '0(=sair)' nao contabiliza na conta da porcentagem
            total++;
        }

    }//fim flag

    if(total > 0){
        float percentApro = ((float)aprovados / total) * 100;
        float percentRepro = 100 - percentApro;
        printf("Aprovados: %.1f%%\nReprovados: %.1f%%", percentApro, percentRepro);
    }
    else{
        printf("Nenhuma nota foi inserida!\n");
    }
    

    return 0;
}