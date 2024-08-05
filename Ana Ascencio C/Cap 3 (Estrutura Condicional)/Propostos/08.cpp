#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float sal;
    std::cout<<"Informe seu salario(R$):  ";
    std::cin>>sal;
    if(sal > 300) sal = sal + sal*0.15;
    else sal = sal + sal*0.35;

    std::cout<<"Novo salario = R$"<<sal;

    return 0;
}