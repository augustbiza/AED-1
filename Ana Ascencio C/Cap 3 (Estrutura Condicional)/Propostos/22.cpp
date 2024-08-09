#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int idade, grupo;
    std::cout<<"Idade: ";
    std::cin>>idade;
    float peso;
    std::cout<<"Peso(kg): ";
    std::cin>>peso;

    if(idade < 20) {
        if(peso <= 60) grupo = 9;
        else if(peso > 60 && peso <= 90) grupo = 8;
        else grupo = 7;
    }
    else if(idade >= 20 && idade <= 50) {
        if(peso <= 60) grupo = 6;
        else if(peso > 60 && peso <= 90) grupo = 5;
        else grupo = 4;
    }
    else {
        if(peso <= 60) grupo = 3;
        else if(peso > 60 && peso <= 90) grupo = 2;
        else grupo = 1;
    }

    std::cout<<"Grupo de risco: "<<grupo<<std::endl;

    return 0;
}