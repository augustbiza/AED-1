#include <iostream>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    system("cls");    

    int cG, cO;
    std::cout<<"Informe o codigo de origem(1-5):  ";
    std::cin>>cO;
    std::cout<<"Informe o codigo de carga(10-40):  ";
    std::cin>>cG;
    
    float peso;
    std::cout<<"Informe o peso(t):  ";
    std::cin>>peso;
    peso *= 1000;   //t --> kg

    bool cGValido = cG >= 10 && cG <= 40, coValido = cO >= 1 && cO <= 5, pesoValido = peso > 0;

    float imp, preco, precoTotal;

    if(cGValido && coValido && pesoValido) {

        if(cO == 1) {
            imp = peso * 0.35;
            if(cG >= 1 && cG <= 4) preco = peso * 100;
            else if(cG >= 5 && cG <= 7) preco = peso * 250;
            else preco = peso * 340;
        }
        else if(cO == 2) {
            imp = peso * 0.25;
            if(cG >= 1 && cG <= 4) preco = peso * 100;
            else if(cG >= 5 && cG <= 7) preco = peso * 250;
            else preco = peso * 340;
        }
        else if(cO == 3) {
            imp = peso * 0.15;
            if(cG >= 1 && cG <= 4) preco = peso * 100;
            else if(cG >= 5 && cG <= 7) preco = peso * 250;
            else preco = peso * 340;
        }
        else if(cO == 4) {
            imp = peso * 0.5;
            if(cG >= 1 && cG <= 4) preco = peso * 100;
            else if(cG >= 5 && cG <= 7) preco = peso * 250;
            else preco = peso * 340;
        }
        else {
            imp = 0;
            if(cG >= 1 && cG <= 4) preco = peso * 100;
            else if(cG >= 5 && cG <= 7) preco = peso * 250;
            else preco = peso * 340;
        }

        precoTotal = preco + imp;
        std::cout<<"Preco = R$"<<precoTotal;
    }
    else std::cout<<"Informacoes incorretas";
    std::cout<<std::endl;

    return 0;
}