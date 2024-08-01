#include <iostream>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    system("cls");    

    int cP, cO;
    std::cout<<"Informe o codigo de origem(1-3):  ";
    std::cin>>cO;
    std::cout<<"Informe o codigo do produto(1-10):  ";
    std::cin>>cP;
    
    float peso;
    std::cout<<"Informe o pes0(kg):  ";
    std::cin>>peso;
    peso *= 1000;   //kg --> g

    bool cpValido = cP >= 1 && cP <= 10, coValido = cO >= 1 && cO <= 3, pesoValido = peso > 0;

    float imp, preco, precoTotal;

    if(cpValido && coValido && pesoValido) {

        if(cO == 1) {
            imp = 0;
            if(cP >= 1 && cP <= 4) preco = peso * 10;
            else if(cP >= 5 && cP <= 7) preco = peso * 25;
            else preco = peso * 35;
        }
        else if(cO == 2) {
            imp = peso * 0.15;
            if(cP >= 1 && cP <= 4) preco = peso * 10;
            else if(cP >= 5 && cP <= 7) preco = peso * 25;
            else preco = peso * 35;
        }
        else {
            imp = peso * 0.25;
            if(cP >= 1 && cP <= 4) preco = peso * 10;
            else if(cP >= 5 && cP <= 7) preco = peso * 25;
            else preco = peso * 35;
        }

        precoTotal = preco + imp;
        std::cout<<"Preco = R$"<<precoTotal;
    }
    else std::cout<<"Informacoes incorretas";
    std::cout<<std::endl;

    return 0;
}