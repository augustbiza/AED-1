#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");

    float num1, num2, result;

    std::cout<<"Informe dois numeros:"<<std::endl;
    std::cin>>num1;
    std::cin>>num2;

    result = num1 - num2;

    std::cout<<"Resultado = "<<result<<std::endl;

    return 0;    
}