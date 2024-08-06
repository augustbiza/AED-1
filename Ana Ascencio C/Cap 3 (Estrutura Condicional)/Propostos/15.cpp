#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int tipo;
    float valor, retorno;
    std::cout<<"Informe o tipo de investimento"<<std::endl<<"1-Poupanca\n2-F.R.f.\n";
    std::cin>>tipo;
    std::cout<<"Qual o valor investido? ";
    std::cin>>valor;

    if(tipo == 1) retorno = valor * 1.03;
    else retorno = valor * 1.04;
    std::cout<<"Retorno = R$"<<retorno<<std::endl;

    return 0;
}