#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float comp, larg, area;

    std::cout<<"Informe as medidas do comodo:"<<std::endl;
    std::cin>>comp;
    std::cin>>larg;

    area = comp * larg;
    float pot = area * 18;

    std::cout<<"Potencia necessaria: "<<pot<<" W"<<std::endl;

    return 0;
}