#include <iostream>
#include <stdlib.h>
#include <cmath>//ceil() e floor() = arrendondr pra cima e baixo

int main(void) {
    system("cls");    

    float x, altura, degraus;

    std::cout<<"Qual altura deseja alcancar(m)?   ";
    std::cin>>altura;
    altura *= 100;//transforma 'm' em 'cm'

    std::cout<<"Qual o tamanho do degrau(cm)?  ";
    std::cin>>x;

    degraus = ceil(altura / x);

    std::cout<<degraus<<" degraus"<<std::endl;

    return 0;
}