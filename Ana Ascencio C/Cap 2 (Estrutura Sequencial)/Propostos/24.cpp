#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float real, dolar, marco, libra;
    std::cout<<"Insira a quantia em reais(R$):  ";
    std::cin>>real;

    dolar = real/1.8;
    marco = real / 2;
    libra = real / 1.57;

    std::cout<<"Dolar = "<<dolar<<std::endl;
    std::cout<<"Marco = "<<marco<<std::endl;
    std::cout<<"Libra = "<<libra<<std::endl;

    return 0;
}