#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int codigo, qt;
    float precoUni, precoTotal, precoFinal, desc;

    std::cout<<"Codigo do produto:  ";
    std::cin>>codigo;
    std::cout<<"Quantidade:  ";
    std::cin>>qt;

    if(codigo >= 1 && codigo <= 10) precoUni = 10;
    else if(codigo >= 11 && codigo <= 20) precoUni = 15;
    else if(codigo >= 21 && codigo <= 30) precoUni = 20;
    else precoUni = 30;

    precoTotal = precoUni * qt;
        if(precoTotal <= 255) desc = precoTotal * 0.05;
        else if(precoTotal > 255 && precoTotal <= 500) desc = precoTotal * 0.1;
        else desc = precoTotal * 0.15;

    precoFinal = precoTotal - desc;
    std::cout<<"Preco final = R$"<<precoFinal<<std::endl;

    return 0;
}