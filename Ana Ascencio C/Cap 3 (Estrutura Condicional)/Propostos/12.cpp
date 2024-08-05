#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float sal, imp;
    std::cout<<"Salario(R$)?  ";
    std::cin>>sal;
    
    imp = sal * 0.07;

    if(sal <= 350) sal += 100;
    else if(sal > 350 && sal<= 600) sal += 75;
    else if(sal > 600 && sal <= 900) sal += 50;
    else sal += 35;
    sal += imp;

    std::cout<<"Salario = R$"<<sal<<std::endl;

    return 0;
}