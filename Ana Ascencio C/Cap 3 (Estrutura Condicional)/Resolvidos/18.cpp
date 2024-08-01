#include <iostream>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    system("cls");    

    float a, b, c;
    std::cout<<"Informe as medidas dos tres lados do triangulo:"<<std::endl;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;

    bool lados = a>0 && b>0 && c>0;
    bool existe = a+b > c && b+c > a && a+c >b;

    if(existe && lados) {
        if(a == b && a == c) std::cout<<"Equilatero"<<std::endl;
        else if(a == b || a == c || b == c) std::cout<<"Isosceles"<<std::endl;
        else std::cout<<"Escaleno"<<std::endl;
    }
    else std::cout<<"Lados nao formam um triangulo"<<std::endl;

    return 0;
}