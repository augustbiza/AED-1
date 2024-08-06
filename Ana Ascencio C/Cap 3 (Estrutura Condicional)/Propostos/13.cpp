#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float preco;
    std::cout<<"Preco(R$)?  ";
    std::cin>>preco;

    if(preco <= 50) preco += preco * 0.05;
    else if(preco > 50 && preco <= 100) preco += preco * 0.1;
    else preco += preco * 0.15;
    std::cout<<"Novo preco = R$"<<preco<<std::endl;

    if(preco <= 80) std::cout<<"Barato";
    else if(preco > 80 && preco <= 120) std::cout<<"Normal";
    else if(preco > 120 && preco <= 200) std::cout<<"Caro";
    else std::cout<<"Muito caro";

    std::cout<<std::endl;

    return 0;
}