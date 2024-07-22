#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int horas, horasExtra;
    float salMin, valorH, valorEx, salB, salEx, salFinal;
    std::cout<<"Quantas horas de trabalho? ";
    std::cin>>horas;
    std::cout<<"Quantas horas extra de trabalho? ";
    std::cin>>horasExtra;
    std::cout<<"Qual o valor do salario minimo(R$)? ";
    std::cin>>salMin;

    valorH = salMin/8;
    valorEx = salMin/4;
    salB = horas * valorH;
    salEx = horasExtra * valorEx;
    salFinal = salB + salEx;

    std::cout<<"Salario a receber: R$"<<salFinal<<std::endl;

    return 0;
}