#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float celsius, farenheit;

    std::cout<<"Qual a temperatura(C):  ";
    std::cin>>celsius;

    farenheit = (celsius + 32) * 1.8;
    std::cout<<celsius<<"C = "<<farenheit<<"F"<<std::endl;

    return 0;
}
//o simbolo "°" nao funciona nao sei o motivo