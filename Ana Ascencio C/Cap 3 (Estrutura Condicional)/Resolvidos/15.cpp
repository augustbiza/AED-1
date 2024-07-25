#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float salMin, salMes, salExt, salB, valorH, valorHex, salFunc, imp = 0, grat;
    int funcion, horas, horasExt;

    std::cout<<"Qual o valor do salario mnimo(R$)?  ";
    std::cin>>salMin;
    std::cout<<"Quantas horas de trabalho?  ";
    std::cin>>horas;
    std::cout<<"Quantas horas extra?  ";
    std::cin>>horasExt;
    std::cout<<"Quantos funcionarios?  ";
    std::cin>>funcion;

    valorH = salMin/5;
    salMes = horas * valorH;
    valorHex = valorH * 1.5;
    salExt = valorHex * horasExt;
    salFunc = 32 * funcion;
    salB = salMes + salExt + salFunc;

    if(salB >= 200 && salB <= 500) imp = salB * 0.1;
    else if(salB > 500) imp = salB * 0.2;

    float salL = salB - imp;

    if(salL <= 350) grat = 100;
    else grat = 50;

    float salReceber = salL + grat;

    std::cout<<"Salario = R$"<<salReceber<<std::endl; 

    return 0;
}