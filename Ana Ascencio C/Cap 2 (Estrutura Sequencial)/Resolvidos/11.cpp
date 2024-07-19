#include <iostream>
#include <stdlib.h>
#include <math.h>

int main(void) {
    system("cls");    

    float num, quad, cubo, raiz2;

    std::cout<<"Insira o numero:  ";
    std::cin>>num;

    quad = pow(num,2);          //quad = num * num;
    std::cout<<"Quadrado = "<<quad<<std::endl;

    cubo = pow(num,3);          //cubo = quad * num;
    std::cout<<"Cubo = "<<cubo<<std::endl;

    raiz2 = sqrt(num);
    std::cout<<"Raiz Quadrada = "<<raiz2<<std::endl;

    return 0;
}