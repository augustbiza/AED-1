#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int lados, diag;

    std::cout<<"Informe a quantidade de lados de um poligono convexo:  ";
    std::cin>>lados;

    diag = lados * (lados - 3)/2;

    std::cout<<"Poligono de "<<lados<<" lados possui "<<diag<<" diagonais"<<std::endl;

    return 0;
}