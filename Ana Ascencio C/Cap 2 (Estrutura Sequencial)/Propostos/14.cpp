#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int anoNasc, anoAtual;
    float anos, meses, dias;

    std::cout<<"Qual o ano de nascimento? ";
    std::cin>>anoNasc;
    std::cout<<"Informe o ano atual: ";
    std::cin>>anoAtual;

    anos = anoAtual - anoNasc;
    meses = anos * 12;
    dias = meses * 30;

    std::cout<<anos<<" anos"<<std::endl;
    std::cout<<meses<<" meses"<<std::endl;
    std::cout<<dias<<" dias"<<std::endl;

    return 0;
}