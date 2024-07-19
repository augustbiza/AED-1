#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float sal, novoSal;

    std::cout<<"Informe o seu salario:  ";
    std::cin>>sal;

    novoSal = sal + 50 - (sal * 0.1);

    std::cout<<"Novo salario = "<<novoSal<<std::endl;

    return 0;
}