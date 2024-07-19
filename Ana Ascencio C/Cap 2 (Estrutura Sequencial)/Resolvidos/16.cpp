#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int horas;
    float salMin, salFinal, valorHora, salBruto, imp;

    std::cout<<"Quantas horas de trabalho:  ";
    std::cin>>horas;

    std::cout<<"Valor do salario minimo:  ";
    std::cin>>salMin;

    valorHora = salMin/2;
    salBruto = valorHora * horas;
    imp = salBruto * 0.03;

    salFinal = salBruto - imp;

    std::cout<<"Salario final = "<<salFinal<<std::endl;

    return 0;
}