#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float sal, novoSal;

    std::cout<<"Informe seu salario:  ";
    std::cin>>sal;

    novoSal = sal * 1.25;

    std::cout<<"Novo salario = "<<novoSal<<std::endl;

    return 0;
}