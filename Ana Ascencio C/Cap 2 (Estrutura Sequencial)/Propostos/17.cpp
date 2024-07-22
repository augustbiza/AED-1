#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float raio, comp, area, volume;

    std::cout<<"Qual o valor do raio? ";
    std::cin>>raio;

    comp = raio * 6.14; //2piR
    area = 3.14 * raio * raio; //piR^2
    volume = (3.14 * area * raio)*3/4;

    std::cout<<"Raio: "<<raio<<std::endl;
    std::cout<<"Comprimento da circunferencia: "<<comp<<std::endl;
    std::cout<<"Area: "<<area<<std::endl;
    std::cout<<"Volume: "<<volume<<std::endl;

    return 0;
}