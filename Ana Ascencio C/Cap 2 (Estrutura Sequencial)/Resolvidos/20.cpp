#include <iostream>
#include <stdlib.h>
#include <cmath>

int main(void) {
    system("cls");    

    float escada, parede, ang;

    std::cout<<"Informe a altura da parede:  ";
    std::cin>>parede;
    std::cout<<"Informe a medida do angulo:  ";
    std::cin>>ang;

    escada = parede / sin(ang);

    std::cout<<"Escada = "<<escada<<std::endl;

    return 0;
}