#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float area, base, altura;

    std::cout<<"Valor da base:  ";
    std::cin>>base;
    std::cout<<"Valor da altura:  ";
    std::cin>>altura;    

    area = (base * altura) / 2;

    std::cout<<"Area = "<<area<<std::endl;

    return 0;
}