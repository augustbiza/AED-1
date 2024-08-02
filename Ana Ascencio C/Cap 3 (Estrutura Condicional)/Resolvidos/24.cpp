#include <iostream>
#include <stdlib.h>
#include <ctype.h>//toupper

int main(void) {
    system("cls");    

    char tipo, refrig;
    std::cout<<"Informe o tipo do produto(A-alimentacao/L-limpeza/V-vestuario):  ";
    std::cin>>tipo;
    tipo = toupper(tipo);
    std::cout<<"Precisa de refrigeracao(S-sim/N-nao):  ";
    std::cin>>refrig;
    refrig = toupper(refrig);

    float preco;
    std::cout<<"Informe o preco(R$):  ";
    std::cin>>preco;

    float adic;
    if(refrig == 'N') {
        if(tipo == 'A') {
            if(preco < 15) adic = 2;
            else adic = 5;
        }
        else if(tipo == 'L') {
            if(preco < 10) adic = 1.5;
            else adic = 2.5;
        }
        else {
            if(preco < 30) adic = 3;
            else adic = 2.5;
        }
    }
    else if(refrig == 'S') {
        if(tipo == 'A') adic = 8;
        else adic = 0;
    }
    preco += adic;

    float imp;
    if(preco < 25) imp = preco * 0.05;
    else imp = preco * 0.08;

    float precoC = preco + imp;

    float desc;
    if(tipo == 'A' || refrig == 'S') desc = 0;
    else desc = precoC * 0.03; 

    float precoF = precoC - desc;
    if(precoF < 50) std::cout<<"Barato";
    else if(preco >= 50 && preco < 100) std::cout<<"Normal";
    else std::cout<<"Caro";

    std::cout<<std::endl;

    return 0;
}