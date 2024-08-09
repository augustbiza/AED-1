#include <iostream>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    system("cls");    

    float preco;
    std::cout<<"Preco(R$):  ";
    std::cin>>preco;
    int categ;
    std::cout<<"Categoria(1-limpeza/2-alimentacao/3-vestuario): ";
    std::cin>>categ;
    char refrig;
    std::cout<<"Refrigeracao(S-sim/N-nao):  ";
    std::cin>>refrig;
    refrig = toupper(refrig);

    float aum, imp;
    if(preco <= 25) {
        if(categ == 1) aum = preco * 0.05;
        else if(categ == 2) aum = preco * 0.08;
        else aum = preco * 0.1; 
    }
    else if(preco > 25) {
        if(categ == 1) aum = preco * 0.05;
        else if(categ == 2) aum = preco * 0.08;
        else aum = preco * 0.1;
    }

    if(categ == 2 || refrig == 'S') imp = preco * 0.05;
    else imp = preco * 0.08;

    float precoFinal = preco + aum - imp;
    std::cout<<"Preco final = R$"<<precoFinal<<std::endl;

    return 0;
}