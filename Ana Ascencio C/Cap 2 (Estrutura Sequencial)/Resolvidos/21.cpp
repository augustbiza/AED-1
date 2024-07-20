#include <iostream>
#include <stdlib.h>
#include <cmath>

int main(void) {
    system("cls");    

    float escada, altura, distancia;

    std::cout<<"Qual a altura que deseja colocar o quadro? ";
    std::cin>>altura;
    std::cout<<"Qual o tamanho da escada? ";
    std::cin>>escada;

    distancia = sqrt((escada*escada) - (altura*altura));

    std::cout<<"Distancia = "<<distancia<<std::endl;

    return 0;
}