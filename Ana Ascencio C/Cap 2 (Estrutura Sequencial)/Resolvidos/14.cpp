#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int anoNasc, anoAtual, idade;

    std::cout<<"Qual o ano de nascimento:  ";
    std::cin>>anoNasc;
    std::cout<<"Qual o ano atual:  ";
    std::cin>>anoAtual;

    idade = anoAtual - anoNasc;

    std::cout<<"Idade = "<<idade<<" anos"<<std::endl;

    return 0;
}