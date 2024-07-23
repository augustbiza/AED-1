#include <iostream>
#include <stdlib.h>
#include <cmath>

int main(void) {
    system("cls");    

    int escolha;
    std::cout<<"1-Somar"<<std::endl<<"2-raiz quarada"<<std::endl;
    std::cout<<"Qual operacao deseja fazer? " ;
    std::cin>>escolha;

    float num1, num2, num3;

    switch(escolha) {
        case 1: //soma
                std::cout<<"Insira dois numeros:"<<std::endl;
                std::cin>>num1;
                std::cin>>num2;
                std::cout<<"Soma = "<<num1 + num2;
                break;
        case 2: //raiz
                std::cout<<"Insira um numero:  ";
                std::cin>>num3;
                std::cout<<"Raiz quad de "<<num3<<" = "<<sqrt(num3);
    }
        
    return 0;
}