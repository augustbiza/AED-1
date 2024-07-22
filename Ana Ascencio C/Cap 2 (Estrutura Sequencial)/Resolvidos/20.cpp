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

    ang = ang * (3.14 / 180.0);//converter graus em radianos
    escada = parede / sin(ang);

    std::cout<<"Escada = "<<escada<<std::endl;

    return 0;
}