#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float sal, pagar1, pagar2, final;

    std::cout<<"Informe o salario:  ";
    std::cin>>sal;
    std::cout<<"Valor da primeira conta:  ";
    std::cin>>pagar1;
    std::cout<<"Valor da segunda conta:  ";
    std::cin>>pagar2;

    final = sal - (pagar1+pagar2);

    std::cout<<"R$"<<final;

    return 0;
}