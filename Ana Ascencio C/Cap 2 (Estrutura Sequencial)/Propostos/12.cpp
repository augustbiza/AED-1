#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float salMinimo, sal, x;

    std::cout<<"Informe seu salario:  ";
    std::cin>>sal;
    std::cout<<"Informe o valor do salario minimo:  ";
    std::cin>>salMinimo;

    x = sal / salMinimo;

    std::cout<<x<<" salarios minimos"<<std::endl;

    return 0;
}