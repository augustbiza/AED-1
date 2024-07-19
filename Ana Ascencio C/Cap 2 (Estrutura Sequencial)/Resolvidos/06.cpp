#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float sal, novoSal;

    std::cout<<"Informe seu salario:  ";
    std::cin>>sal;

    float grat = 0.05 * sal, imp = 0.07 * sal;
    novoSal = sal + grat - imp;

    std::cout<<"Novo Salario = "<<novoSal;

    return 0;
}