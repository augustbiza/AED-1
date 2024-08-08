#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <iomanip>

int main(void) {
    system("cls");    

    char genero;
    std::cout<<"Qual seu genero(h/m):  ";
    std::cin>>genero;
    genero = tolower(genero);

    float altura, peso, pesoIdeal;
    std::cout<<"Qual sua altura(m):  ";
    std::cin>>altura;
    std::cout<<"Qual seu peso(kg):  ";
    std::cin>>peso;

    if(genero == 'm') pesoIdeal = (72.7*altura) - 58;
    else pesoIdeal = (62.1*altura) - 44.7;

    std::cout<<"Peso ideal = "<<std::fixed<<std::setprecision(1)<<pesoIdeal<<"kg"<<std::endl;

    return 0;
}