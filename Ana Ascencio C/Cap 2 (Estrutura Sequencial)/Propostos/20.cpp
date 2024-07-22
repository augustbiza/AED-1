#include <iostream>
#include <stdlib.h>
#include <cmath>

int main(void) {
    system("cls");    

    float escada, distancia, ang;

    std::cout<<"Qual valor do angulo? ";
    std::cin>>ang;
    std::cout<<"Qual a distancia da escada para a parede? ";
    std::cin>>distancia;

    ang = ang * (3.14 / 180.0);
    escada = distancia / cos(ang);
    std::cout<<"Escada = "<<escada<<std::endl;

    return 0;
}