#include <iostream>
#include <stdlib.h>
#include <cmath> //ceil arredonda para cima; floor arredonda para baixo

int main(void) {
    system("cls");    

    float custo, convite, minimo, quantidade, lucro;

    std::cout<<"Qual o valor da despesa do espetaculo(R$)?  ";
    std::cin>>custo;
    std::cout<<"Qual o valor do ingresso?  ";
    std::cin>>convite;

    minimo = ceil(custo/convite);

    std::cout<<"Quantos ingressos foram vendidos?  ";
    std::cin>>quantidade;

    lucro = (quantidade - minimo) * convite;

    std::cout<<"Quantidade minima de ingressos: "<<minimo<<std::endl;
    std::cout<<"Lucro = R$"<<lucro<<std::endl;

    return 0;
}