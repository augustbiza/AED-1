#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float pesoKg, pesoG;

    std::cout<<"Informe seu peso(kg):  ";
    std::cin>>pesoKg;

    pesoG = pesoKg * 1000;

    std::cout<<pesoKg<<" kg = "<<pesoG<<" g"<<std::endl;

    return 0;
}