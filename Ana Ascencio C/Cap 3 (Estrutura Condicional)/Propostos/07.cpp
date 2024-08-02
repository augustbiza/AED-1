#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float sal;
    std::cout<<"Informe seu salario(R$):  ";
    std::cin>>sal;

    if(sal < 500) std::cout<<"Novo salario = R$"<<sal+500;
    else std::cout<<"Nao tem aumento";

    return 0;
}