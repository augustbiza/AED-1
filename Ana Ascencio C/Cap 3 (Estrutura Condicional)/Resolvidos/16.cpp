#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float precoAt, novoPreco, vendas;
    std::cout<<"Informe o preco do produto:  ";
    std::cin>>precoAt;
    std::cout<<"Informe a venda mensal desse produto:  ";
    std::cin>>vendas;

    if(vendas < 500 && precoAt < 30) novoPreco = precoAt * 1.1;
    else if((vendas >= 500 && vendas < 1200) && (precoAt >= 30 && precoAt < 80)) novoPreco = precoAt * 1.15;
    else if(vendas >= 1200 && precoAt >= 80) novoPreco = precoAt * 0.8;

    std::cout<<"Novo preco = R$"<<novoPreco<<std::endl;

    return 0;
}