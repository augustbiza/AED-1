#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float preco, novoPreco;

    std::cout<<"Informe o preco do produto:  ";
    std::cin>>preco;

    novoPreco = preco * 0.9;

    std::cout<<"Novo preco = "<<novoPreco<<std::endl;

    return 0;
}