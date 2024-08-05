#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float sal;
    std::cout<<"Informe o salario(R$):  ";
    std::cin>>sal;

    if(sal <= 300) sal+= sal*.015;
    else if(sal > 300 && sal <= 600) sal += sal*0.1;
    else if(sal > 600 && sal <= 900) sal += sal*0.5;

    std::cout<<"Novo salario = R$"<<sal<<std::endl;

    return 0;
}