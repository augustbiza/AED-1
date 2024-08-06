#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float sal;
    std::cout<<"Salario?  ";
    std::cin>>sal;

    if(sal <= 300) sal += sal * 0.5;
    else if(sal > 300 && sal <= 500) sal += sal * 0.4;
    else if(sal > 500 && sal <= 700) sal += sal * 0.3;
    else if(sal > 700 && sal <= 800) sal += sal * 0.2;
    else if(sal > 800 && sal <= 1000) sal += sal * 0.1;
    else sal += sal * 0.05;

    std::cout<<"Novo salario = R$"<<sal<<std::endl;

    return 0;
}