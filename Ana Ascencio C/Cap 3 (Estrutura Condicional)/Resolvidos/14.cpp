#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float sal, bon, aux, novoSal;
    std::cout<<"Informe seu salario(R$):  ";
    std::cin>>sal;

    if(sal <= 500) bon = sal * 0.05;
    else if(sal > 500 && sal <= 1200) bon = sal * 0.12;
    else bon = 0;

    if(sal <= 600) aux = 150;
    else aux = 100;

    novoSal = sal + bon + aux;

    std::cout<<"Novo Salario = R$"<<novoSal<<std::endl;

    return 0;
}