#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float kgw, valorkgw, salMin, pagar;

    std::cout<<"Qual a quantidade de energia(KgW) consumida? ";
    std::cin>>kgw;
    std::cout<<"Informe o valor do salario minimo:  ";
    std::cin>>salMin;

    valorkgw = salMin/5;

    pagar = kgw * valorkgw;

    std::cout<<"Quantidade consumida = kgW"<<kgw<<std::endl;
    std::cout<<"valor de kgW = R$"<<valorkgw<<std::endl;
    std::cout<<"Total a pagar = R$"<<pagar<<std::endl;
    std::cout<<"Total a pagar c/ desconto(15%) = R$"<<pagar * 0.75<<std::endl;

    return 0;
}
