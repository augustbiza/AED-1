#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float salario, salFinal, vendas;

    std::cout<<"Qual o salario fixo do vendedor? ";
    std::cin>>salario;
    std::cout<<"Quanto ele arrecadou para a empresa? ";
    std::cin>>vendas;

    salFinal = salario + (vendas*0.04);

    std::cout<<"Salario desse mes: R$"<<salFinal<<std::endl;

    return 0;
}