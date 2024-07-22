#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int h, m;
    std::cout<<"Informe as horas e os minutos:  ";
    std::cin>>h;
    std::cin>>m;

    float horas = h * 60, total = horas + m;

    std::cout<<total<<" minutos"<<std::endl;

    return 0;
}