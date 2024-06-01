//DIAS VIVIDOS: IDADE SER VARIAVEL PARAMETRIZADA POR REFERENCIA
#include<stdio.h>

void leiaIdade(int *idadePtr){// int *idadePtr = &idade;
    printf("Informe sua idade: ");
    scanf("%i", idadePtr);
}

int diasVividos(int *idadePtr){
    int dias = *idadePtr * 365;

    return dias;
}

int main(){

    int idade;
    leiaIdade(&idade);//endereco de 'idade' como parâmetro para a função 'leiaIdade'
    int dias = diasVividos(&idade);//endereco de 'idade' como parâmetro para a função 'diasVividos'

    printf("%i anos = %i dias", idade, dias);

    return 0;
}