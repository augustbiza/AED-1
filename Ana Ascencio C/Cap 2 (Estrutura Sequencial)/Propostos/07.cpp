#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float peso, eng, emag;

    std::cout<<"Informe seu peso(kg):  ";
    std::cin>>peso;

    eng = peso * 1.20;      //engordar 20%
    emag = peso * 0.85;     //emagrecer 15%

    std::cout<<"Peso inicial: "<<peso<<std::endl;
    std::cout<<"Emagrecemiento: "<<emag<<std::endl;
    std::cout<<"Engordar: "<<eng<<std::endl;

    return 0;
}