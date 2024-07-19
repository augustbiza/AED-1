#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float precoFab, precoFinal;
    int imp, lucro;

    std::cout<<"Informe o preco de fabrica:  ";
    std::cin>>precoFab;

    std::cout<<"Informe o percentual de imposto(%):  ";
    std::cin>>imp;
    imp *= precoFab / 100; 

    std::cout<<"Informe o percentual do distribuidor(%):  ";
    std::cin>>lucro;
    lucro *= precoFab / 100;

    precoFinal = precoFab + imp + lucro;

    std::cout<<"Preco Final = R$"<<precoFinal<<std::endl;     

    return 0;
}