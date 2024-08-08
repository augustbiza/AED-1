#include <iostream>

int main(void) {
    
    int preco;
    std::cout<<"Informe o preco(R$):  ";
    std::cin>>preco;

    if(preco > 100) preco *= 0.85;
    else if(preco < 100 && preco > 30) preco *= 0.9;

    std::cout<<"Novo preco = R$"<<preco<<std::endl;

    return 0;
}