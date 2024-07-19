#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float sal, aum, novoSal;

    std::cout<<"Informe seu salario:  ";
    std::cin>>sal;
    std::cout<<"Informe o aumento(%):  ";
    std::cin>>aum;

    novoSal = sal * (1 + aum/100);

    std::cout<<"Novo salario = "<<novoSal;

    return 0;
}